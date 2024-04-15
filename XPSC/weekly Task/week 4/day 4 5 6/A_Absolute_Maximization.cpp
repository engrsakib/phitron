#include <bits/stdc++.h>

#define br "\n"
#define ll long long
#define yes cout << "YES\n"
#define no cout << "NO\n"
using namespace std;

int main()
{
    // _Created :  15 April 2024 ||   22:36:03
    // _File    :  A_Absolute_Maximization.cpp
    // Writer    :  Md. Nazmus Sakib
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    // اللهم صل على سيدنا محمدن النبى الامى وآله وسلم
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<ll> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        ll ans = 0;
        int j = 0;
        while (j < 32)
        {
            bool one = false;
            bool zero = false;
            int i = 0;
            while (i < n)
            {
                bitset<32> bset(a[i]);
                one |= (bset[j] == 1);
                zero |= (bset[j] == 0);
                i++;
            }
            if (one and zero)
            {
                ans += (1 << j);
            }
            j++;
        }
        cout << ans << br;
    }
    return 0;
}