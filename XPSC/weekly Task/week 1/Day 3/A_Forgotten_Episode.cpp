#include <bits/stdc++.h>

using namespace std;

int main()
{
    // Md. Nazmus Sakib
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    long long n;
    cin >> n;
    long long sum_total = n * (n + 1) / 2;
    long long sum_watch = 0;
    for (long i = 1; i < n; i++)
    {
        long long a;
        cin >> a;
        sum_watch += a;
    }
    cout << abs(sum_total - sum_watch) << "\n";
    return 0;
}