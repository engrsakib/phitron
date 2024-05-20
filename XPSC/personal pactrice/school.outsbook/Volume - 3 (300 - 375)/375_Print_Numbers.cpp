#include <iostream>
#include <string>
#include <sstream>
#include <cmath>
using namespace std;

// Function to convert a number to its corresponding alphabet representation
string numberToAlphabet(int n) {
    if (n == 0 || n > 26 || n < -26)
        return "Error!!";
    else if (n % 3 == 0)
        return "(" + static_cast<ostringstream*>( &(ostringstream() << n) )->str() + (n > 0 ? "+C" : "-c") + ")";
    else if (n > 0)
        return "+" + static_cast<ostringstream*>( &(ostringstream() << n) )->str() + "+" + char(abs(n) - 1 + 'A');
    else
        return static_cast<ostringstream*>( &(ostringstream() << n) )->str() + "+" + char(abs(n) - 1 + 'a');
}

int main() {
    int n;
    while (cin >> n) {
        cout << numberToAlphabet(n) << endl;
    }
    return 0;
}
