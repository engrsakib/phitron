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
    while(t--)
    {
        int m , n;
        cin >> m >> n;
        int mx = max(m, n);
        cout << mx * 2 -1 << "\n";
    }
    return 0;
}