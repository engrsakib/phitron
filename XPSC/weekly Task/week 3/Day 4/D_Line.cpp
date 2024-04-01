#include <bits/stdc++.h>

#define br "\n"
#define ll long long
#define yes cout << "YES\n"
#define no cout << "NO\n"
using namespace std;

int main()
{
    // _Created :  01 April 2024 ||   15:09:11
    // _File    :  D_Line.cpp
    // Writer    :  Md. Nazmus Sakib
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    // اللهم صل على سيدنا محمدن النبى الامى وآله وسلم
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, total = 0;
        cin >> n;
        string s;
        cin >> s;
        vector<ll> v;

        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'R')
            {
                v.push_back(i - (n - 1 - i));
                total += n - 1 - i;
                // cout << total << endl;
            }
            else if (s[i] == 'L')
            {
                v.push_back((n - 1 - i) - i);
                total += i;
            }
            // cout << v[i] << br;
        }
        sort(v.begin(), v.end(), greater<int>());
        for (int i = 0; i < n; i++)
        {
            if (v[i] > 0)
            {
                total += v[i];
            }
            cout << total << ' ';
        }
        cout << '\n';
    }
    return 0;
}