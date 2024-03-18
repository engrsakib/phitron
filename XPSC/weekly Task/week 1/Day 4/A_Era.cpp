#include <bits/stdc++.h>

using namespace std;

int main()
{
    // Md. Nazmus Sakib
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v;
        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            v.push_back(a);
        }
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            if (v[i] > i + 1)
            {
                ans = max(ans, v[i] - (i + 1));
            }
        }
        cout << ans << '\n';
    }
    return 0;
}