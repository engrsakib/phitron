#include <bits/stdc++.h>

using namespace std;

int main()
{
    // Md. Nazmus Sakib
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    cin >> n;
    vector<long long> vr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> vr[i];
    }
    vector<long long> prefix_sum(n);
    prefix_sum[0] = vr[0];
    for (int i = 1; i < n; i++)
    {
        prefix_sum[i] = prefix_sum[i - 1] + vr[i];
    }
    for (int i = n - 1; i >= 0; i--)
    {
        cout << prefix_sum[i] << " ";
    }
    return 0;
}
