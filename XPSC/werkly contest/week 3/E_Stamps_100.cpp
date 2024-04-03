#include <bits/stdc++.h>

#define br "\n"
#define ll long long
#define yes cout << "YES\n"
#define no cout << "NO\n"
using namespace std;

int main()
{
    // _Created :  02 April 2024 ||   23:41:12
    // _File    :  E_Stamps_100.cpp
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

        for (int i = 0; i < n - 2; i++)
        {
            if (s[i] == '1' && s[i + 1] == '1' && s[i + 2] == '0')
            {
                s[i + 1] = '0';
            }
        }

        cout << s << endl;
    }
    return 0;
}