#include <bits/stdc++.h>

#define br "\n"
#define ll long long
#define yes cout << "YES\n"
#define no cout << "NO\n"
using namespace std;

int main()
{
    // _Created :  02 April 2024 ||   23:12:12
    // _File    :  C_Dracula_Eats.cpp
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
        ll sum = 2;
        ll count = 0;

        for (int i = 0; i < n; i++)
        {
            if (sum < n + 1)
            {
                count++;
            }
            else
            {
                break;
            }
            sum += 7;
            // cout << sum << br;
        }
        cout << count << endl;
    }
    return 0;
}