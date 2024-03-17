#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    // Md. Nazmus Sakib
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll a, b;
    cin >> a >> b;
    vector<int> v;
    vector<int> n;
    for (int i = 0; i < a; i++)
    {
        int aa;
        cin >> aa;
        v.push_back(aa);
    }
    for (int i = 0; i < b; i++)
    {

        int aa;
        cin >> aa;
        n.push_back(aa);
    }
    ll r = 0, l = 0;
    ll ans = 0;
    while (l < a and r < b)
    {
        ll count1 = 0, count2 = 0, curr = v[l];
        while (v[l] == curr and l < a)
        {
            count1++;
            l++;
        }
        while (curr > n[r] and r < b)
        {
            r++;
        }
        while (n[r] == curr && r < b)
        {
            count2++;
            r++;
        }

        ans += count1 * count2;
    }
    cout << ans << "\n";
    return 0;
}