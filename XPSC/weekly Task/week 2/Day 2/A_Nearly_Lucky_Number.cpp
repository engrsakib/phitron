#include <iostream>
#include <string>

using namespace std;

int main()
{
    long long n;
    cin >> n;

    string num = to_string(n);
    int count = 0;
    for (char digit : num)
    {
        if (digit == '4' || digit == '7')
        {
            count++;
        }
    }

    if (count == 4 || count == 7)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}
