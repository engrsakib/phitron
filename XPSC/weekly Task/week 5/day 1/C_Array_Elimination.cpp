#include <bits/stdc++.h>

#define br "\n"
#define ll long long
#define yes cout << "YES\n"
#define no cout << "NO\n"
using namespace std;

int main()
{
    // _Created :  19 April 2024 ||   09:33:27
    // _File    :  C_Array_Elimination.cpp
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
        vector<ll> v(n);
        for (ll i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        ll bits[30];
        memset(bits, 0, sizeof(bits));

        ll i = 0;
        while (i < 30)
        {
            ll num = (1ll << i);
            ll j = 0;
            while (j < n)
            {
                if ((v[j] & num) != 0)
                    bits[i]++;
                j++;
            }
            //cout << i << " " << bits[i] << br;
            i++;
        }
        
        ll k = 1;
        while (k <= n)
        {
            bool flag = false;
            ll n = 0;
            while (n < 30)
            {
                if ((bits[n] % k) != 0)
                {
                    flag = true;
                    break;
                }
                n++;
            }
            if (flag == 0)
                cout << k << " ";
            k++;
        }
        cout << br;
    }
    return 0;
}