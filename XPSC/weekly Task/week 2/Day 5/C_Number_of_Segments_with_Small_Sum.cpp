#include <bits/stdc++.h>

#define br cout << "\n"
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define ll long long
using namespace std;

int main()
{
    // _Created :  26 March 2024 ||   01:14:28
    // _File    :  C_Number_of_Segments_with_Small_Sum.cpp
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
    ll l = 0, r = 0, sum = 0, ans = 0;
    while (r < n)
    {
        sum += v[r];
        if (sum <= s)
        {
            ans += (r - l + 1);
        }
        else
        {
            while (sum > s and l < r)
            {
                sum -= v[l];
                l++;
            }
            if (sum <= s)
            {
                ans += (r - l + 1);
            }
        }
        r++;
    }
    cout << ans;
    br;
    return 0;
}