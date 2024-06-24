#include <bits/stdc++.h>

using namespace std;
class Solution
{
public:
    int dp[100][100];
    int subset_sum(int n, int a[], int s)
    {
        if (n == 0)
        {
            if (s == 0)
                return 1;
            else
                return 0;
        }
        if (dp[n][s] != -1)
            return dp[n][s];
        if (a[n - 1] <= s)
        {
            int op1 = subset_sum(n - 1, a, s - a[n - 1]);
            int op2 = subset_sum(n - 1, a, s);
            return dp[n][s] = op1 + op2;
        }
        else
        {
            return dp[n][s] = subset_sum(n - 1, a, s);
        }
    }
};
int main()
{
    // Md. Nazmus Sakib
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    Solution obj;
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int s;
    cin >> s;
    for (int i = 0; i < 100; i++)
    {
        for (int j = 0; j < 100; j++)
        {
            obj.dp[i][j] = -1;
        }
    }
    obj.dp[0][0] = 1;
    for (int i = 1; i <= s; i++)
    {
        obj.dp[0][i] = 0;
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j <= s; j++)
        {
            if (a[i - 1] <= j)
            {
                obj.dp[i][j] = obj.dp[i - 1][j - a[i - 1]] + obj.dp[i - 1][j];
            }
            else
            {
                obj.dp[i][j] = obj.dp[i - 1][j];
            }
        }
    }
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= s; j++)
        {
            cout << obj.dp[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
