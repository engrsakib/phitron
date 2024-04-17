#include <bits/stdc++.h>

#define br "\n"
#define ll long long
#define yes cout << "YES\n"
#define no cout << "NO\n"
using namespace std;

int main()
{
    // _Created :  17 April 2024 ||   21:53:24
    // _File    :  Alternating_Binary_String.cpp
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
        string str;
        cin >> str;
        ll ans = 0;
        ll int i = 0;
        while (i < n)
        {
            if (str[i + 1] == str[i])
            {
                ans++;
            }
            i++;
        }
        cout << ans << endl;
    }
    return 0;
}