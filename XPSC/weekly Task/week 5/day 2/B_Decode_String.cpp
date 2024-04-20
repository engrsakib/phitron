#include <bits/stdc++.h>

#define br "\n"
#define ll long long
#define yes cout << "YES\n"
#define no cout << "NO\n"
const int a = 97;
using namespace std;

int main()
{
    // _Created :  20 April 2024 ||   21:40:06
    // _File    :  B_Decode_String.cpp
    // Writer    :  Md. Nazmus Sakib
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    // اللهم صل على سيدنا محمدن النبى الامى وآله وسلم
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--)
    {
        string str;
        ll n;
        cin >> n;
        cin >> str;
        string ans = "";
        ll i = 0;
        while (i < n)
        {
            if ((i + 2 < n and str[i + 2] == '0') and (i + 3 >= n or str[i + 3] != '0'))
            {
                ll num = ((str[i] - '0') * 10) + (str[i + 1] - '0');
                ans.push_back((char)((a - 1) + num));
                i += 2;
            }
            else
            {
                ll num = ((str[i] - '0'));
                ans.push_back((char)((a - 1) + num));
            }
            i++;
        }
        cout << ans << br;
    }
    return 0;
}