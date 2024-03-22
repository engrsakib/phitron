#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int count = 0;
        for (int i = 0; i < n - 1; i++)
        {
            for (int j = 1; j < n; j++)
            {
                int a1 = a[i] - a[j];
                long long int b = a[i] + a[j];
                long long int c = a[i] * a[j];
                if ((a1 - b) == (b - c))
                {
                    count++;
                }
            }
        }
        cout << count << endl;
    }
    return 0;
}