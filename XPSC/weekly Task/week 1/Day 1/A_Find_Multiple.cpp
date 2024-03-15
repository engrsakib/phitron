#include <bits/stdc++.h>

using namespace std;

int main()
{
    // Md. Nazmus Sakib
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int a, b, c;
    cin >> a >> b >> c;

    int i = a;
    while (i <= b)
    {
        if (i % c == 0)
        {
            cout << i << "\n";
            break;
        }
        i++;
    }

    if (i > b)
        cout << -1 << "\n";
    return 0;
}