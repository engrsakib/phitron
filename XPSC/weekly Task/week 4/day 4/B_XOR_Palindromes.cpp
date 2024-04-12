#include <bits/stdc++.h>

#define br "\n"
#define ll long long
#define yes cout << "YES\n"
#define no cout << "NO\n"
using namespace std;

int main()
{
    // _Created :  09 April 2024 ||   00:17:20
    // _File    :  B_XOR_Palindromes.cpp
    // Writer    :  Md. Nazmus Sakib
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    // اللهم صل على سيدنا محمدن النبى الامى وآله وسلم
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        string s;
        cin >> s;
        string t(n + 1, '0');
        ll ans = 0;
        ll max_F = 0;
        ll max_L = 0;
        ll i = 0;
        if (n % 2 == 1)
            max_L++;
        while (i <= (n / 2) - 1)
        {
            if (s[i] == s[n - i - 1])
                max_F++;
            else
                ans++;
            i++;
        }
        // cout << max_F << " " << ans << br;
        ll j = 0;
        while (j <= max_F)
        {
            ll k = 0;
            while (k <= max_L)
            {
                t[ans + j * 2 + k] = '1';
                k++;
            }
            j++;
        }
        cout << t << br;
    }
    return 0;
}