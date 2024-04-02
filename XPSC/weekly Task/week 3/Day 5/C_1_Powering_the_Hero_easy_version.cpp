#include <bits/stdc++.h>

#define br "\n"
#define ll long long
#define yes cout << "YES\n"
#define no cout << "NO\n"
using namespace std;

int main()
{
    // _Created :  02 April 2024 ||   15:45:51
    // _File    :  C_1_Powering_the_Hero_easy_version.cpp
    // Writer    :  Md. Nazmus Sakib
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    // اللهم صل على سيدنا محمدن النبى الامى وآله وسلم
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--)
    {
        priority_queue<ll> pq;
        ll n;
        cin >> n;

        ll sum = 0;

        for (ll i = 0; i < n; i++)
        {
            ll v;
            cin >> v;
            if (v == 0)
            {
                if (pq.empty())
                {
                    continue;
                }
                else
                {
                    ll b = pq.top();
                    pq.pop();
                    sum += b;
                }
            }
            else
            {
                pq.push(v);
            }
        }

        cout << sum << br;
    }
    return 0;
}