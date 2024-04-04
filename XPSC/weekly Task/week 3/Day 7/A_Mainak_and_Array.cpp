#include <bits/stdc++.h>

#define br "\n"
#define ll long long
#define yes cout << "YES\n"
#define no cout << "NO\n"
using namespace std;

int main()
{
    // _Created :  04 April 2024 ||   15:41:47
    // _File    :  A_Mainak_and_Array.cpp
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
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        int sum = v[n - 1] - v[0];
        bool flag = true;
        if (n == 1)
        {
            flag = false;
        }

        for (int i = 1; i < n; i++)
        {
            sum = max(sum, v[i] - v[0]);
        }

        for (int i = 0; i < n - 1; i++)
        {
            sum = max(sum, v[n - 1] - v[i]);
        }

        for (int i = 1; i < n; i++)
        {
            sum = max(sum, v[i - 1] - v[i]);
        }

        if (flag)
            cout << abs(sum) << br;
        else
            cout << flag << br;
    }
    return 0;
}