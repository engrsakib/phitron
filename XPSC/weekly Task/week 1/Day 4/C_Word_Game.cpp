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
        map<string, int> mp;
        int n;
        cin >> n;
        string sn[3][n];
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin >> sn[i][j];
                mp[sn[i][j]]++;
            }
        }
        int ans = 0;
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (mp[sn[i][j]] == 1)
                {
                    ans += 3;
                }
                else if (mp[sn[i][j]] == 2)
                {
                    ans += 1;
                }
                // else if (mp[sn[i][j]] == 3)
                // {
                //     ans += 0;
                // }
            }
            cout << ans << " ";
            ans = 0;
        }
        cout << endl;
    }

    return 0;
}