#include <bits/stdc++.h>

#define br "\n"
#define ll long long
#define yes cout << "YES\n"
#define no cout << "NO\n"
using namespace std;

int main()
{
    // _Created :  18 April 2024 ||   12:21:35
    // _File    :  print.cpp
    // Writer    :  Md. Nazmus Sakib
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    // اللهم صل على سيدنا محمدن النبى الامى وآله وسلم
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int N;
    int lineNumber = 1;

    while (cin >> N)
    {
        for (int i = 1; i <= N; i++)
        {
            cout << "Line " << lineNumber << ": hello" << endl;
            lineNumber++;
        }
        lineNumber = 1;
    }
    return 0;
}