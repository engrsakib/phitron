#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    // Perform the specified operations
    int result = N * 567;
    result -= 357;
    result += 7492;
    result *= 9879;
    result -= 4787;
    result *= 7493;
    result -= 498;
    result *= 1237;
    result += 100;
    result *= 9879;
    result -= 9;

    // Extract the last two digits
    int lastTwoDigits = (result % 100);

    // Output the last two digits
    cout << lastTwoDigits << endl;

    return 0;
}
