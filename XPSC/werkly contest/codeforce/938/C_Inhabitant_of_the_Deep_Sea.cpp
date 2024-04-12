#include <bits/stdc++.h>

#define br "\n"
#define ll long long
#define yes cout << "YES\n"
#define no cout << "NO\n"
using namespace std;

int main()
{
    // _Created :  08 April 2024 ||   21:30:41
    // _File    :  C_Inhabitant_of_the_Deep_Sea.cpp
    // Writer    :  Md. Nazmus Sakib
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    // اللهم صل على سيدنا محمدن النبى الامى وآله وسلم
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;

    while (t--)
    {
        ll n, k;
        cin >> n >> k;

        vector<ll> a(n);
        for (ll i = 0; i < n; ++i)
        {
            cin >> a[i];
        }

        ll left = 0, right = n - 1;
        while ((left <= right) and (k > 0))
        {
            ll left_attack = min(a[left], k);
            a[left] -= left_attack;
            k -= left_attack;

            if (a[left] == 0)
            {
                left++;
            }
            if (left > right)
            {
                break;
            }

            ll right_attack = min(a[right], k);
            a[right] -= right_attack;
            k -= right_attack;

            if (a[right] == 0)
            {
                right--;
            }
            if (right == 0 || right < left)
            {
                break;
            }
        }
        ll total = abs(n - 1 - right + left);
        cout << total << br;
    }
    return 0;
}