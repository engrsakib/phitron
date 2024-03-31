#include <bits/stdc++.h>

#define br "\n"
#define ll long long
#define yes cout << "YES\n"
#define no cout << "NO\n"
using namespace std;

int main()
{
    // _Created :  31 March 2024 ||   18:58:54
    // _File    :  D_Double_Strings.cpp
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
        vector<string> arr(n);
        map<string, int> mp;
        for (ll i = 0; i < n; i++)
        {
            cin >> arr[i];
            mp[arr[i]]++;
        }
        // for(string a : arr)
        // {
        //     cout << a << " ";
        // }cout << br;
        string ans(n, '0');
        for (int i = 0; i < n; i++)
        {
            int flag = 0;
            // cout << arr[i] << " " << arr[i].length() << br;
            for (ll j = 0; j < arr[i].length(); j++)
            {
                // cout << arr[i].substr(0, j);
                // cout << arr[i].substr(j, arr[i].length()-1);
                string prf = arr[i].substr(0, j);
                string sff = arr[i].substr(j, arr[i].length() - 1);
                if (mp[prf] and mp[sff])
                {
                    flag = 1;
                }
            }
            cout << flag;
        }
        cout << br;
    }
    return 0;
}