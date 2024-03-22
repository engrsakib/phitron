#include <bits/stdc++.h>

using namespace std;

int main()
{
    // Md. Nazmus Sakib
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int k, s;
    cin >> k >> s;
    int cnt = 0;
    for (int i = 0; i <= k; i++)
    {
        for (int j = 0; j <= k; j++)
        {
            // cout << i << j << " ";
            int num = s - i - j;
            // cout << num << " ";
            if (num >= 0 and k >= num)
                cnt++;
        }
    }
    cout << cnt << endl;
    return 0;
}