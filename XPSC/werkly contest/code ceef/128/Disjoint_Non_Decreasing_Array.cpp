#include <bits/stdc++.h>

#define br "\n"
#define ll long long
#define yes cout << "YES\n"
#define no cout << "NO\n"
using namespace std;

int main()
{
    // _Created :  03 April 2024 ||   22:17:19
    // _File    :  Disjoint_Non_Decreasing_Array.cpp
    // Writer    :  Md. Nazmus Sakeyib
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
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        ll mn = -1e18;
        ll mx = 1e18;
        ll key, key2;
        for (int i = 0; i < n; i++)
        {
            if (a[i] >= mn)
            {
                mn = a[i];
                key = i;
            }
        }
        for (int i = 0; i < n; i++)
        {
            if (a[i] >= mx && i != key2)
            {
                mn = a[i];
                key2 = i;
            }
        }
        bool flag = true;
        if (key == n - 1)
        {
            // cout << "Yes" << endl;
            flag = true;
        }
        else
        {
            for (int i = key; i < n - 1; i++)
            {
                if ((a[i + 1]) >= (a[i] - 1))
                {
                    flag = false;
                }
            }
        }
        if (flag)
        {
            yes;
        }
        else
        {
            no;
        }
    }
    return 0;
}