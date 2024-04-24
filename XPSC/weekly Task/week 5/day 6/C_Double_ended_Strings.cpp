#include <bits/stdc++.h>

#define br "\n"
#define ll long long
#define yes cout << "YES\n"
#define no cout << "NO\n"
using namespace std;

int main()
{
    // _Created :  24 April 2024 ||   02:22:15
    // _File    :  C_Double_ended_Strings.cpp
    // Writer    :  Md. Nazmus Sakib
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    // اللهم صل على سيدنا محمدن النبى الامى وآله وسلم
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--)
    {
        string a, b;
        cin >> a >> b;
        ll a_sz = a.length();
        ll b_sz = b.length();

        ll ans = 0;
        ll i = 1;
        while (i <= min(a_sz, b_sz))
        {
            ll j = 0;
            while (j + i <= a_sz)
            {
                ll k = 0;
                while (k + i <= b_sz)
                {
                    if (a.substr(j, i) == b.substr(k, i))
                    {
                        ans = max(ans, i);
                    }
                    k++;
                }
                j++;
            }
            i++;
        }
        cout << a.length() + b.length() - 2 * ans << "\n";
    }
    return 0;
}