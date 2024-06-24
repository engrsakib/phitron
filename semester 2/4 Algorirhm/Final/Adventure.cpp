#include <bits/stdc++.h>

using namespace std;
int advebture(int w, int weight[], int value[], int v)
{
    vector<vector<int>> dp(v + 1, vector<int>(w + 1, 0));
    for (int i = 1; i <= v; i++)
    {
        for (int j = 1; j <= w; j++)
        {
            if (weight[i - 1] <= j)
            {
                dp[i][j] = max(value[i - 1] + dp[i - 1][j - weight[i - 1]], dp[i - 1][j]);
            }
            else
            {
                dp[i][j] = dp[i - 1][j];
            }
        }
    }
    return dp[v][w];
}
int main()
{
    // Md. Nazmus Sakib
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int t;
    cin >> t;
    while (t--)
    {
        int v, w;
        cin >> v >> w;
        int value[v], weight[v];
        for (int i = 0; i < v; i++)
        {
            cin >> weight[i];
        }
        for (int i = 0; i < v; i++)
        {
            cin >> value[i];
        }
        cout << advebture(w, weight, value, v) << endl;
    }
    return 0;
}
