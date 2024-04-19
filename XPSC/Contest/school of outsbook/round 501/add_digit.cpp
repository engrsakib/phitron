#include <bits/stdc++.h>

#define br "\n"
#define ll long long
#define yes cout << "YES\n"
#define no cout << "NO\n"
using namespace std;

int main()
{
    // _Created :  18 April 2024 ||   13:39:12
    // _File    :  add_digit.cpp
    // Writer    :  Md. Nazmus Sakib
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    // اللهم صل على سيدنا محمدن النبى الامى وآله وسلم
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    string number;

    while (cin >> number)
    {
        int sum = 0;
        for (int i = 0; i < number.length(); i++)
        {
            sum += number[i] - '0';
        }
        cout << sum << br;
    }
    return 0;
}