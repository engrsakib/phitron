#include <bits/stdc++.h>

using namespace std;

int main()
{
    // _Created :  25 March 2024 ||   03:05:08
    // _File    :  B_All_Distinct.cpp
    // Writer    :  Md. Nazmus Sakib
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    // اللهم صل على سيدنا محمدن النبى الامى وآله وسلم
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    while (n--)
    {
        int t;
        cin >> t;
        set<int> s;
        for (int i = 0; i < t; i++)
        {
            int a;
            cin >> a;
            s.insert(a);
        }
        if (s.size() % 2 == t % 2)
            cout << s.size() << endl;
        else
            cout << s.size() - 1 << endl;
    }
    return 0;
}