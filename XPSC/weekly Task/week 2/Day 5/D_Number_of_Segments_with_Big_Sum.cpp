#include <bits/stdc++.h>

#define br cout << "\n"
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define ll long long
using namespace std;

int main()
{
    // _Created :  26 March 2024 ||   03:01:36
    // _File    :  D_Number_of_Segments_with_Big_Sum.cpp
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
    ll cnt = 0;
    ll sum = 0;
    ll l = 0;
    ll r = 0;
    while (r < n)
    {
        sum += v[r];
        while (sum >= k)
        {
            cnt += abs(n - r);
            sum -= v[l];
            l++;
        }
        r++;
    }
    cout << cnt;
    br;
    // cout << sum;
    return 0;
}