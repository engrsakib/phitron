#include <bits/stdc++.h>

#define br "\n"
#define ll long long
#define yes cout << "YES\n"
#define no cout << "NO\n"
using namespace std;

int main()
{
    // _Created :  18 April 2024 ||   16:07:45
    // _File    :  print_alpha.cpp
    // Writer    :  Md. Nazmus Sakib
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    // اللهم صل على سيدنا محمدن النبى الامى وآله وسلم
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int a;
    while (cin >> a)
    {
        if (a != 0)
        {
            for (int i = 1; i <= a; i++)
            {
                cout << char('a' + i - 1) << " ";
            }
            cout << br;
        }
        else
        {
            cout << "0\n";
        }
    }
    return 0;
}