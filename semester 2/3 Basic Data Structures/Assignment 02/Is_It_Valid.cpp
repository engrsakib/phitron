#include <bits/stdc++.h>

using namespace std;
bool is_true(string &s)
{
    stack<char> str;
    for (char chara : s)
    {
        if (chara == '0')
        {
            if (!str.empty() && str.top() == '1')
            {
                str.pop();
            }
            else
            {
                str.push(chara);
            }
        }
        else if (chara == '1')
        {
            if (!str.empty() && str.top() == '0')
            {
                str.pop();
            }
            else
            {
                str.push(chara);
            }
        }
    }
    return str.empty();
}
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
        if(is_true(str)) cout << "YES" << endl;
        else cout << "NO" << endl;        
    }
    return 0;
}
