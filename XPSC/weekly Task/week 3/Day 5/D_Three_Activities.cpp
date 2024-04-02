#include <bits/stdc++.h>

#define br "\n"
#define ll long long
#define yes cout << "YES\n"
#define no cout << "NO\n"
using namespace std;
const int N = 3;
int main()
{
    // _Created :  02 April 2024 ||   01:12:24
    // _File    :  D_Three_Activities.cpp
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
        vector<pair<ll, ll>> fast;
        vector<pair<ll, ll>> second;
        vector<pair<ll, ll>> third;
        for (int i = 0; i < n; i++)
        {
            ll a;
            cin >> a;
            fast.push_back({a, i}); // fast input
        }
        for (int i = 0; i < n; i++)
        {
            ll a;
            cin >> a;
            second.push_back({a, i}); // second input
        }
        for (int i = 0; i < n; i++)
        {
            ll a;
            cin >> a;
            third.push_back({a, i}); // third input
        }
        sort(fast.begin(), fast.end(), greater<>());
        sort(second.begin(), second.end(), greater<>());
        sort(third.begin(), third.end(), greater<>());
        int sum = 0;
        for (int i = 0; i < N; i++)
        {
            for (int j = 0; j < N; j++)
            {
                for (int k = 0; k < N; k++)
                {
                    if ((fast[i].second != second[j].second) and (fast[i].second != third[k].second) and (second[j].second != third[k].second))
                    {
                        int ans = fast[i].first + second[j].first + third[k].first;
                        sum = max(sum, ans);
                    }
                }
            }
        }
        cout << sum << br;
    }
    return 0;
}