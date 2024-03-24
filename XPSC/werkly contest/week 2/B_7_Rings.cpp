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
        int n, x;
        cin >> n >> x;
        int sum = n * x;
        string as = to_string(sum);
        if (as.length() == 5)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}