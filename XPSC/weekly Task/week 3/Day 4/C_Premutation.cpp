#include <bits/stdc++.h>

#define br "\n"
#define ll long long
#define yes cout << "YES\n"
#define no cout << "NO\n"
using namespace std;

int main()
{
    // _Created :  01 April 2024 ||   00:35:56
    // _File    :  C_Premutation.cpp
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
        ll arr[n][n];
        ll per[n] = {0};
        ll cnt[n + 1] = {0};
        for (ll i = 0; i < n; i++)
        {
            per[i] = i + 1;
            for (int j = 0; j < n - 1; j++)
            {
                cin >> arr[i][j];
                if (j == 0)
                    cnt[arr[i][j]]++;
            }
        }
        // for(ll i = 0; i < n; i++)
        // {
        //     for(int j = 0; j < n-1; j++)
        //     {
        //         cout << arr[i][j] << " ";
        //     }
        //     cout << br;
        // }
        for (int i = 1; i <= n; i++)
        {
            if (cnt[i] == n - 1)
            {
                per[0] = i;
                break;
            }
        }
        for (int i = 0; i < n; i++)
        {

            if (arr[i][0] != per[0])
            {
                //  cout << arr[i][0] << " ";
                for (int j = 0; j < n - 1; j++)
                {
                    per[j + 1] = arr[i][j];
                }
            }
        }
        for (ll a : per)
        {
            cout << a << " ";
        }
        cout << br;
    }
    return 0;
}