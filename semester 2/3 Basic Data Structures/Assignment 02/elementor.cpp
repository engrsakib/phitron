#include <bits/stdc++.h>

using namespace std;

int main()
{
    // Md. Nazmus Sakib
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int t;
    cin >> t;
    while (t--)
    {
        string str;
        cin >> str;
        stack <char> char1;
        stack <char> char2;
        for (char tchar : str)
        {
            if (tchar == '1')
            {
                if (!char2.empty() && char2.top() == '0')
                {
                    char2.pop();
                }
                else
                {
                    char2.push(tchar);
                }
            }
            else
            {

                char2.push(tchar);
            }
        }
        if (!char2.empty())
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }
    return 0;
}
