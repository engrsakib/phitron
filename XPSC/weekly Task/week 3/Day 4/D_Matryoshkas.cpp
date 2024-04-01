#include <bits/stdc++.h>

#define br "\n"
#define ll long long
#define yes cout << "YES\n"
#define no cout << "NO\n"
using namespace std;

int main()
{
    // _Created :  01 April 2024 ||   23:20:56
    // _File    :  D_Matryoshkas.cpp
    //Writer    :  Md. Nazmus Sakib
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    //اللهم صل على سيدنا محمدن النبى الامى وآله وسلم
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while(t--)
    {
        ll n;
        cin >> n;
        vector<ll>v(n);
        map<ll, ll>mp;
        for(ll i = 0; i < n; i++)
        {
            cin >> v[i];
            mp[v[i]]++;
        }
        set <ll>st;
        for(ll i = 0; i < n; i++)
        {
            
           // cout << mp[v[i]] << " ";
           st.insert(v[i]);
           st.insert(v[i] + 1);
        }
        int a = 0;
        ll ans = 0;
        for(ll x : st)
        {
            int xx = mp[x];
           // cout << xx << " ";
           ans += max(0, xx - a);
           a = xx;
           //cout << ans << " xx " << xx << " a " << a << " " << endl;
        }
        cout << ans << br;
    }
    return 0;
}