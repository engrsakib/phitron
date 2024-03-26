#include <bits/stdc++.h>
#define ll long long
#define br cout << "\n"
#define yes cout << "YES\n"
#define no cout << "NO\n"
using namespace std;

int main()
{
    // _Created :  26 March 2024 ||   03:16:20
    // _File    :  E_Segments_with_Small_Set.cpp
    // Writer    :  Md. Nazmus Sakib
    /* Enter your code here. Read input from STDIN. Prll output to STDOUT */
    // اللهم صل على سيدنا محمدن النبى الامى وآله وسلم
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll n, k;
    cin >> n >> k;
    vector<ll> v(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    ll sum = 0, cnt = 0, l = 0, r = 0;
    map<ll, ll> frq;
    while (r < n)
    {
        frq[v[r]]++;
        while (frq.size() > k)
        {
            frq[v[l]]--;
            if (frq[v[l]] == 0)
            {
                frq.erase(v[l]);
            }
            l++;
        }
        cnt += abs(r - l + 1);
        r++;
    }
    cout << cnt;
    br;
    return 0;
}