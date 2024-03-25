#include <bits/stdc++.h>

using namespace std;

int main()
{
    // _Created :  25 March 2024 ||   02:45:16
    // _File    :  C_Move_Brackets.cpp
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
        string s;
        cin >> s;
        int cnt = 0, o = 0, c = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '(')
                o++;
            else
                c++;

            if (c > o)
            {
                cnt++;
                c--;
            }
        }
        cout << cnt << "\n";
    }
    return 0;
}