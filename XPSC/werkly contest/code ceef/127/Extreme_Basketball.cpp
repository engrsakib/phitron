#include <bits/stdc++.h>

#define br cout << "\n"
#define yes cout << "YES\n"
#define no cout << "NO\n"
using namespace std;

int main()
{
    // _Created :  27 March 2024 ||   21:21:58
    // _File    :  Extreme_Basketball.cpp
    // Writer    :  Md. Nazmus Sakib
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    // اللهم صل على سيدنا محمدن النبى الامى وآله وسلم
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        int sub = a - b;
        int cnt = 0;
        while (sub < 10)
        {
            // if (sub > 10)
            // {
            //     break;
            // }
            cnt++;
            sub += 3;
        }
        cout << cnt << endl;
    }
    return 0;
}