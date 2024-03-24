#include <bits/stdc++.h>

using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        long long sum = 0;
        for (int i = 0; i < n; i++)
        {

            cin >> a[i];

            sum += a[i];
        }

        if (sum < n)
        {
            cout << "NO" << endl;
        }
        else if (sum == n or sum >= n && sum % n == 0)
        {
            cout << "YES" << endl;
        }
        else if (sum > n)
        {
            int div = (sum / n);
            int sub = sum - (n * div);
            if (sub <= n && k >= 1)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
    }
    return 0;
}