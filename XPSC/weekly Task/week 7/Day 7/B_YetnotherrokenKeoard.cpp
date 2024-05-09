#include <bits/stdc++.h>

#define br "\n"
#define ll long long
#define yes cout << "YES\n"
#define no cout << "NO\n"
using namespace std;

class Solution
{
public:
    void solve()
    {
        stack<ll> small;
        stack<ll> capital;
        string str;
        cin >> str;
        int i = 0;
        while (i < str.length())
        {
            if (str[i] >= 'A' and str[i] <= 'Z' and str[i] != 'B')
            {
                capital.push(i);
            }
            else if (str[i] >= 'a' and str[i] <= 'z' and str[i] != 'b')
            {
                small.push(i);
            }
            else if (str[i] == 'B' and !capital.empty())
            {
                str[capital.top()] = '9';
                capital.pop();
            }
            else if (str[i] == 'b' and !small.empty())
            {
                str[small.top()] = '9';
                small.pop();
            }
            i++;
        }
        for (int i = 0; i < str.length(); i++)
        {
            if ((str[i] != 'B' and str[i] != 'b') and str[i] != '9')
            {
                cout << str[i];
            }
        }
        cout << br;
    }
};
int main()
{
    // _Created :  09 May 2024 ||   03:58:23
    // _File    :  B_YetnotherrokenKeoard.cpp
    // Writer    :  Md. Nazmus Sakib(engrsakib)
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    // اللهم صل على سيدنا محمدن النبى الامى وآله وسلم
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--)
    {
        Solution obj;
        obj.solve();
    }
    return 0;
}