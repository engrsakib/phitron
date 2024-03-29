#include <bits/stdc++.h>

#define br cout << "\n"
#define yes cout << "YES\n"
#define no cout << "NO\n"
using namespace std;

int main()
{
    // _Created :  28 March 2024 ||   18:53:58
    // _File    :  Hoop_Jump.cpp
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
        // vector<int> v;
        //  for(int i = 1; i <= n; i++)
        //  {
        //      v.push_back(i);
        //  }
        if (n % 2 == 1)
            cout << (1 + n) / 2;
        else
            cout << (1 + n) / 2 + 1;
        br;
    }
    return 0;
}