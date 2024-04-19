#include <bits/stdc++.h>

#define br "\n"
#define ll long long
#define yes cout << "YES\n"
#define no cout << "NO\n"
using namespace std;

int main()
{
    // _Created :  18 April 2024 ||   15:00:40
    // _File    :  print_number.cpp
    // Writer    :  Md. Nazmus Sakib
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    // اللهم صل على سيدنا محمدن النبى الامى وآله وسلم
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int N;

    while (cin >> N)
    {
        if (N == 0)
        {
            cout << "0\n";
        }
        else
        {
            for (int i = 1; i <= N; ++i)
            {
                cout << i << " " << i + 1 << " " << i + 2 << "\n";
            }
        }
    }
    return 0;
}