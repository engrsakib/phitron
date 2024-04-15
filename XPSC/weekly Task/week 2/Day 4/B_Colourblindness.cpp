#include <bits/stdc++.h>

using namespace std;

int main()
{
    // _Created :  25 March 2024 ||   03:28:51
    // _File    :  B_Colourblindness.cpp
    // Writer    :  Md. Nazmus Sakib
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    // اللهم صل على سيدنا محمدن النبى الامى وآله وسلم
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string a, b;
        bool flag = false;
        cin >> a >> b;
        for (int i = 0; i < n; i++)
        {
            if (a[i] == 'R' and b[i] != 'R' or a[i] != 'R' and b[i] == 'R')
            {
                flag = true;
                break;
            }
        }
        if (!flag)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}