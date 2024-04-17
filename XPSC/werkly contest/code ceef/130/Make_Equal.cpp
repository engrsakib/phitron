#include <bits/stdc++.h>

#define br "\n"
#define ll long long
#define yes cout << "YES\n"
#define no cout << "NO\n"
using namespace std;

int main()
{
    // _Created :  17 April 2024 ||   21:15:52
    // _File    :  Make_Equal.cpp
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
        ll a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        bool flag = true;
        if (a[n - 1] != a[0])
        {
            flag = false;
        }
        else
        {
            ll first = a[0];
            ll j = 1;
            while (j < n - 1)
            {
                if (a[j] < first)
                {
                    flag = false;
                }
                j++;
            }
        }
        if (flag)
            yes;
        else
            no;
    }
    return 0;
}