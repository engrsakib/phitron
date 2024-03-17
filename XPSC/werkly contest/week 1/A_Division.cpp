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
        int ret;
        cin >> ret;
        if (ret <= 1399)
            cout << "Division 4\n";
        else if (1400 <= ret and ret <= 1599)
            cout << "Division 3\n";
        else if (1600 <= ret and ret <= 1899)
            cout << "Division 2\n";
        else if (1900 <= ret)
            cout << "Division 1\n";
    }
    return 0;
}