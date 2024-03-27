#include <bits/stdc++.h>
#define fst ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
#define ll long long
#define endl '\n'
using namespace std;
int main()
{
    fst
        ll t;
    cin >> t;
    while (t--)
    {
        ll a, k, x;
        cin >> a >> k >> x;
        ll ar[k];
        ar[0] = 1;
        for (ll i = 1; i < k; i++)
        {
            ar[i] = ar[i - 1] * 2;
        }
        if (ar[k - 1] > x)
            cout << "No" << endl;
        else
            cout << "Yes" << endl;
    }
    return 0;
}