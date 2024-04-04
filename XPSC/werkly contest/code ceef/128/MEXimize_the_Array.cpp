#include <bits/stdc++.h>

#define br "\n"
#define ll long long
#define yes cout << "YES\n"
#define no cout << "NO\n"
using namespace std;

int main()
{
    // _Created :  03 April 2024 ||   21:39:13
    // _File    :  MEXimize_the_Array.cpp
    // Writer    :  Md. Nazmus Sakib
    /* Enter your code here. Read input from STDIN. Prll output to STDOUT */
    // اللهم صل على سيدنا محمدن النبى الامى وآله وسلم
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll T;
    cin >> T;
    while (T--)
    {
        ll n;
        cin >> n;
        vector<ll> a(n);
        vector<ll> v;
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
            v.push_back(a[i]);
        }

        sort(v.begin(), v.end());

        int flag = 1;
        for (ll i = 0; i < n; i++)
        {
            if (v[i] != i)
            {
                flag = 0;
                break;
            }
        }
        ll ans = 0;

        if (!flag)
        {
            for (ll i = 0; i < n; i++)
            {

                if (i > v[i])
                {
                    ans += i - v[i];
                }
                else if (i < v[i])
                {
                    ans += v[i] - i;
                }
            }
        }
        if (flag)
            cout << 0 << br;
        else
            cout << ans << br;
    }

    return 0;
}