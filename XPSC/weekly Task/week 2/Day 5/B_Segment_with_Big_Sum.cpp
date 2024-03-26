#include <bits/stdc++.h>

#define br cout << "\n"
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define ll long long
using namespace std;

int main()
{
    // _Created :  26 March 2024 ||   02:40:34
    // _File    :  B_Segment_with_Big_Sum.cpp
    // Writer    :  Md. Nazmus Sakib
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    // اللهم صل على سيدنا محمدن النبى الامى وآله وسلم
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll n, k;
    cin >> n >> k;
    vector<ll> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    ll r = 0, l = 0, sum = 0;
    ll mn = 1e18;
    while (r < n)
    {
        sum += v[r];
        while (sum >= k)
        {
            mn = min(mn, abs(r - l + 1));
            sum -= v[l];
            l++;
        }
        r++;
    }
    if (mn == 1e18)
    {
        cout << -1;
        br;
    }
    else
    {
        cout << mn;
        br;
    }
    return 0;
}