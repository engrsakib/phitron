#include <bits/stdc++.h>

#define br "\n"
#define ll long long
#define yes cout << "YES\n"
#define no cout << "NO\n"
using namespace std;

int main()
{
    // _Created :  01 April 2024 ||   22:16:37
    // _File    :  B_Long_Long.cpp
    // Writer    :  Md. Nazmus Sakib
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    // اللهم صل على سيدنا محمدن النبى الامى وآله وسلم
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll arr[n];
        for (ll i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        ll sum = 0;
        ll operation = 0;
        // for (ll i = 0; i < n; i++)
        // {
        //     cout << arr[i];
        // } cout << br;
        bool neg = false;
        for (ll i = 0; i <= n; i++)
        {
            if (n > i)
            {
                sum += abs(arr[i]);
            }
            if (neg)
            {
                if (i == n or arr[i] > 0)
                {
                    operation++;
                    neg = false;
                }
            }
            else
            {
                if (arr[i] < 0)
                {
                    neg = true;
                }
            }
        }
        cout << sum << " " << operation << br;
    }
    return 0;
}