#include <bits/stdc++.h>

#define br "\n"
#define ll long long
#define yes cout << "YES\n"
#define no cout << "NO\n"
using namespace std;

int main()
{
    // _Created :  18 April 2024 ||   16:41:24
    // _File    :  Butterfly’s_Sequence.cpp
    // Writer    :  Md. Nazmus Sakib
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    // اللهم صل على سيدنا محمدن النبى الامى وآله وسلم
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int N;
    while (cin >> N)
    {
        int sum = 0;
        for (int i = 1; i <= N; i++)
        {
            sum += N + 1;
            cout << sum << endl; // Print i-th term in the sequence
        }
    }
    return 0;
}