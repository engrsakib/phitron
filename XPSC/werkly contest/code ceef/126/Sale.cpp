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
        vector<long long> ar(n);
        for (int i = 0; i < n; i++)
        {
            cin >> ar[i];
        }
        vector<long long> prf(n);
        prf[0] = ar[0];
        for (int i = 1; i < n; i++)
        {
            prf[i] = ar[i] + prf[i - 1];
        }
        long long sum = 0;
        for (int i = 0; i < n; i++)
        {
            sum = max(sum, prf[i] + ar[i]);
        }
        cout << sum << endl;
    }
    return 0;
}