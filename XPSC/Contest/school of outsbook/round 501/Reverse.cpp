#include <bits/stdc++.h>

#define br "\n"
#define ll long long
#define yes cout << "YES\n"
#define no cout << "NO\n"
using namespace std;

int main()
{
    // _Created :  18 April 2024 ||   15:06:04
    // _File    :  Reverse.cpp
    // Writer    :  Md. Nazmus Sakib
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    // اللهم صل على سيدنا محمدن النبى الامى وآله وسلم
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    while (cin >> n)
    {
        if (n != 0)
        {
            priority_queue<int> pq;
            for (int i = 1; i <= n; i++)
            {
                pq.push(i);
            }
            while (!pq.empty())
            {
                cout << pq.top() << " ";
                pq.pop();
            }
            cout << br;
        }
        else
            cout << '0' << br;
    }
    return 0;
}