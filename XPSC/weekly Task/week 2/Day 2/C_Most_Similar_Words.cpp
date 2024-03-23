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
    char arr[110][110];
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= m; j++)
            {
                cin >> arr[i][j];
            }
        }
        // for(int i = 0; i < n; i++)
        // {
        //     for(int j = 0; j < m; j++)
        //     {
        //         cout<<arr[i][j];
        //     }
        //     cout << " ";
        // }
        // cout << endl;
        int mn = INT_MAX;
        int s;
        for (int i = 1; i < n; i++)
        {
            for (int j = i + 1; j <= n; j++)
            {

                for (int k = 1; k <= m; k++)
                {
                    // cout << arr[i][k] << " " << arr[j][k] << " ";
                    s += abs(arr[i][k] - arr[j][k]);
                }
                // cout << endl;
                mn = min(mn, s);
                s = 0;
            }
            // cout << endl;
        }
        cout << mn << "\n";
    }
    return 0;
}