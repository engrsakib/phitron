#include <bits/stdc++.h>

#define br "\n"
#define yes cout << "YES\n"
#define no cout << "NO\n"
using namespace std;

int main()
{
    // _Created :  28 March 2024 ||   19:57:54
    // _File    :  The_Two_Dishes.cpp
    // Writer    :  Md. Nazmus Sakib
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    // اللهم صل على سيدنا محمدن النبى الامى وآله وسلم
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n, s;
        cin >> n >> s;
        if (s <= n)
            cout << s << br;
        else
            cout << n * 2 - s << br;
    }
    return 0;
}