#include <bits/stdc++.h>

#define br "\n"
#define ll long long
#define yes cout << "YES\n"
#define no cout << "NO\n"
using namespace std;

int main()
{
    // _Created :  23 April 2024 ||   21:57:28
    // _File    :  F_Minimize_Xor_Difference.cpp
    // Writer    :  Md. Nazmus Sakib
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    // اللهم صل على سيدنا محمدن النبى الامى وآله وسلم
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;

    while (t--)
    {
        ll a, b;
        cin >> a >> b;

        ll ans = 0;

        bool flag = false;

        for (ll i = 32; i >= 0; i--)
        {

            if (((1 << i) & a) == ((1 << i) & b))
            {
                continue;
            }
            else if (flag)
            {
                if (((1 << i) & a) == 0)
                {
                    ans += pow(2, i);
                }
            }
            else
            {
                if (((1 << i) & b) == 0)
                {
                    ans += pow(2, i);
                }
            }

            flag = true;
        }

        cout << ans << endl;
    }
    return 0;
}