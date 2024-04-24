#include <bits/stdc++.h>

#define br "\n"
#define ll long long
#define yes cout << "YES\n"
#define no cout << "NO\n"
using namespace std;

int main()
{
    // _Created :  24 April 2024 ||   00:46:42
    // _File    :  Cricket_Ranking.cpp
    // Writer    :  Md. Nazmus Sakib
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    // اللهم صل على سيدنا محمدن النبى الامى وآله وسلم
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int r1, w1, c1;
        cin >> r1 >> w1 >> c1;
        int r2, w2, c2;
        cin >> r2 >> w2 >> c2;
        if (((r1 > r2) && (c1 > c2)) || ((w1 > w2) && (r1 > r2)) || ((c1 > c2) && (w1 > w2)))
        {
            cout << "A\n";
        }
        else
        {
            cout << "B\n";
        }
    }
    return 0;
}