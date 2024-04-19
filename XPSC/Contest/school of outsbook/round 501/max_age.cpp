#include <bits/stdc++.h>

#define br "\n"
#define ll long long
#define yes cout << "YES\n"
#define no cout << "NO\n"
using namespace std;

int main()
{
    // _Created :  18 April 2024 ||   16:26:48
    // _File    :  max_age.cpp
    // Writer    :  Md. Nazmus Sakib
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    // اللهم صل على سيدنا محمدن النبى الامى وآله وسلم
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    while (cin >> n)
    {
        priority_queue<int> pq;
        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            pq.push(a);
        }
        cout << pq.top() << br;
        pq.pop();
    }

    return 0;
}