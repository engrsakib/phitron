#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;

    long long result = N;
    result = result * 567 - 357;
    result = result + 7492;
    result = result * 9879 - 4787;
    result = result * 7493 - 498;
    result = result * 1237 + 100;
    result = result * 9879 - 9;

    // Extract the last two digits
    int lastTwoDigits = result % 100;

    cout << lastTwoDigits << endl;

    return 0;
}
