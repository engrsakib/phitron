#include <iostream>
#include <sstream>
using namespace std;

int main() {
    int A, B, X, Y;
    stringstream output;

    while (cin >> A >> B >> X >> Y) {
        int jalalWarriors = A + B;
        int pratapWarriors = X + Y;

        if (jalalWarriors > pratapWarriors) {
            output << "Jalal Wins\n";
        } else if (jalalWarriors < pratapWarriors) {
            output << "Pratap Win\n";
        } else {
            output << "They make friendship\n";
        }
    }

    // Convert the stringstream to a string
    string result = output.str();

    // Remove the last newline character
    if (!result.empty() && result[result.length() - 1] == '\n') {
        result.erase(result.length() - 1);
    }

    // Print the final result
    cout << result;

    return 0;
}
