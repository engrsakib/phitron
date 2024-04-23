#include <bits/stdc++.h>

#define br "\n"
#define ll long long
#define yes cout << "YES\n"
#define no cout << "NO\n"
using namespace std;

int main()
{
    // _Created :  23 April 2024 ||   22:33:33
    // _File    :  E_Prefixing.cpp
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
        vector<int> a(n);
        map<int, int> count;
        int m = INT_MIN;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            m = max(m, a[i]);
        }

        vector<int> b;

        int i = 0;
        while (i < n)
        {
            if (!count[a[i]])
            {
                b.push_back(a[i]);
            }
            else
            {
                b.push_back(m);
            }
            count[a[i]]++;
            i++;
        }

        for (int x : b)
        {
            cout << x << ' ';
        }
        cout << br;
    }
    return 0;
}