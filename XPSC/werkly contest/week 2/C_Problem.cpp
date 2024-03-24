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
        int a, b;
        cin >> a >> b;
        if (abs(a - b) % 2 == 0)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}