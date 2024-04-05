#include <bits/stdc++.h>

#define br "\n"
#define ll long long
#define yes cout << "YES\n"
#define no cout << "NO\n"
using namespace std;

int main()
{
    // _Created :  04 April 2024 ||   15:51:36
    // _File    :  Alt_Tab.cpp
    //Writer    :  Md. Nazmus Sakib
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    //اللهم صل على سيدنا محمدن النبى الامى وآله وسلم
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll n;
    cin >> n;
    vector<string>st(n);
    vector<string>ans(n);
    for(ll i = 0; i < n; i++)
    {
        cin >> st[i];
    }
    set<string>ss;
    for(int i = n-1; i>= 0; i--)
    {
        ll len = st[i].length();
       // cout << len << br;
       string suf = st[i].substr(len-2, 2);
        if(ss.find(st[i]) == ss.end())
	        {
	            ans.push_back(suf);
	            ss.insert(st[i]);
	        }
    }
    for(auto aa : ans)
    {
        cout << aa ;
    }
    return 0;
}