#include <bits/stdc++.h>

using namespace std;
class Solution
{
public:
    int dp[100][100];
    bool subset_sum(int n, int a[], int s)
    {
        if (n == 0)
        {
            if (s == 0)
                return true;
            else
                return false;
        }
        if (dp[n][s] != -1)
            return dp[n][s];
        if (a[n - 1] <= s)
        {
            bool op1 = subset_sum(n - 1, a, s - a[n - 1]);
            bool op2 = subset_sum(n - 1, a, s);
            return dp[n][s] = op1 || op2;
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
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= s; j++)
        {
            obj.dp[i][j] = -1;
        }
    }
    if (obj.subset_sum(n, a, s))
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}
