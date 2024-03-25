#include <bits/stdc++.h>
#define ll long long
#define en cout << "\n"
using namespace std;

int main()
{
    // _Created :  25 March 2024 ||   23:10:11
    // _File    :  A_Segment_with_Small_Sum.cpp
    // Writer    :  Md. Nazmus Sakib
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    // اللهم صل على سيدنا محمدن النبى الامى وآله وسلم
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll n, s;
    cin >> n >> s;
    vector<ll> v;
    for (int i = 0; i < n; i++)
    {
        ll a;
        cin >> a;
        v.push_back(a);
    }
    ll sum = 0;
    ll r = 0;
    ll l = 0;
    ll ans = 0;
    while (r < n)
    {
        sum += v[r];
        if (sum <= s)
        {
            ans = max(ans, r - l + 1);
        }
        else
        {
            sum -= v[l];
            l++;
        }
        r++;
    }
    cout << ans;
    en;
    return 0;
}