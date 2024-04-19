#include <bits/stdc++.h>

#define br "\n"
#define ll long long
#define yes cout << "YES\n"
#define no cout << "NO\n"
using namespace std;

int main()
{
    // _Created :  18 April 2024 ||   16:03:04
    // _File    :  print_a.cpp
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
            for (int i = 0; i < a; i++)
            {
                cout << 'a';
            }
            cout << br;
        }
        else
            cout << "0" << br;
    }
    return 0;
}