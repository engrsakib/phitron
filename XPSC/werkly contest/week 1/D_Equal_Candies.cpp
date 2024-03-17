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
        vector<int> v(n);
        int min = 1e9;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            if (v[i] < min)
            {
                min = v[i];
            }
        }
        long long sum = 0;
        for (int i = 0; i < n; i++)
        {
            int eat = v[i] - min;
            sum += eat;
        }
        cout << sum << '\n';
    }
    return 0;
}