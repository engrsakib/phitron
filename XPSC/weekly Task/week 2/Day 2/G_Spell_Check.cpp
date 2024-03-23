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
        string name = "Timur";
        sort(name.begin(), name.end());
        // cout << name << endl;
        // cout << name.length() << endl;
        int n;
        cin >> n;
        string c;
        cin >> c;
        bool flag = true;
        sort(c.begin(), c.end());
        if (n != name.length())
        {
            flag = false;
        }
        else
        {
            for (int i = 0; i < c.length(); i++)
            {
                if (c[i] != name[i])
                {
                    flag = false;
                }
            }
        }
        if (flag)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}