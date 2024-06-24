#include <bits/stdc++.h>

using namespace std;
bool chocolates(int total_kitkat, int kitkat[], int n)
{
    if (total_kitkat % 2 == 0)
    {
        int half = total_kitkat / 2;
        int dp[n + 1][n + 1];
        dp[0][0] = true;
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= half; j++)
            {
                dp[i][j] = dp[i - 1][j];
                if (j >= kitkat[i - 1])
                {
                    dp[i][j] = dp[i][j] || dp[i - 1][j - kitkat[i - 1]];
                }
            }
        }
        return dp[n][half];
    }
    else
    {
        return false;
    }
}
int main()
{
    // Md. Nazmus Sakib
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int kitkat[n];
        int total_kitkat = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> kitkat[i];
            total_kitkat += kitkat[i];
        }
        if (chocolates(total_kitkat, kitkat, n))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}
