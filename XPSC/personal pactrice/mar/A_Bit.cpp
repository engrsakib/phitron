#include <bits/stdc++.h>

using namespace std;

int main()
{
    // Md. Nazmus Sakib
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int x = 0;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string a;
        cin >> a;
        if (a == "++X" or a == "X++")
            x += 1;
        else if (a == "--X" or a == "X--")
            x -= 1;
    }
    cout << x << endl;
    return 0;
}