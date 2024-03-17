#include <bits/stdc++.h>

using namespace std;

int main()
{
    // Md. Nazmus Sakib
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int x, y, z;
    cin >> x >> y >> z;
    bool flag = true;
    for (int i = 0; i <= z; i++)
    {
        for (int j = 0; j <= z; j++)
        {
            int total = x * i + y * j;
            if (total == z)
            {
                // cout << "Yes\n";
                flag = false;
                break;
            }
        }
    }
    if (flag)
        cout << "No\n";
    else
        cout << "Yes\n";
    return 0;
}