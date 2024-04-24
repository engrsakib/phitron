#include <bits/stdc++.h>

#define br "\n"
#define ll long long
#define yes cout << "YES\n"
#define no cout << "NO\n"
using namespace std;

int main()
{
    // _Created :  24 April 2024 ||   01:50:31
    // _File    :  A_New_Palindrome.cpp
    // Writer    :  Md. Nazmus Sakib
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    // اللهم صل على سيدنا محمدن النبى الامى وآله وسلم
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        ll num = 0;
        ll n = s.length();

        if (n % 2 == 0 and n > 2)
        {
            ll i = 1;
            while (i < n / 2)
            {
                if (s[i] != s[i - 1])
                {
                    num++;
                    break;
                }
                i++;
            }
        }
        else if (n % 2 == 1 and n > 3)
        {
            ll j = 1;
            while (j < n / 2)
            {
                if (s[j] != s[j - 1])
                {
                    num++;
                    break;
                }
                j++;
            }
        }
        if (num)
            yes;
        else
            no;
    }
    return 0;
}