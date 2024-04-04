#include <bits/stdc++.h>

#define br "\n"
#define ll long long
#define yes cout << "YES\n"
#define no cout << "NO\n"
using namespace std;

int main()
{
    // _Created :  03 April 2024 ||   21:10:11
    // _File    :  Moody_Chef.cpp
    // Writer    :  Md. Nazmus Sakib
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    // اللهم صل على سيدنا محمدن النبى الامى وآله وسلم
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, l, r;
        cin >> n >> l >> r;
        vector<ll> v(n);
        for (ll i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        ll max_happy = 0;
        ll min_happy = 0;
        ll happy = 0;
        for (ll i = 0; i < n; i++)
        {
            if (v[i] >= l and v[i] <= r)
            {
                happy++;
                if (happy > max_happy)
                {
                    max_happy = happy;
                }
            }
            else
            {
                happy--;
                if (happy < min_happy)
                {
                    min_happy = happy;
                }
            }
        }
        cout << max_happy << " " << min_happy << br;
    }
    return 0;
}