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
        map<int, int> mp;
        int mx = 0;
        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            mp[a]++;
            mx = max(mx, mp[a]);
        }
        int cnt = 0;
        int crr = mx;
        while (crr != n)
        {
            cnt++;
            if (crr * 2 >= n)
            {
                cnt += n - crr;
                break;
            }

            cnt += crr;
            crr *= 2;
        }
        cout << cnt << endl;
    }
    return 0;
}