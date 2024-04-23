#include <bits/stdc++.h>

#define br "\n"
#define ll long long
#define yes cout << "YES\n"
#define no cout << "NO\n"
using namespace std;

int main()
{
    // _Created :  23 April 2024 ||   21:36:02
    // _File    :  C_Dotify_Playlist.cpp
    // Writer    :  Md. Nazmus Sakib
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    // اللهم صل على سيدنا محمدن النبى الامى وآله وسلم
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n, k, l;
        cin >> n >> k >> l;
        int M;
        int L;

        priority_queue<int> pq;
        for (int i = 0; i < n; i++)
        {
            cin >> M;
            cin >> L;
            if (L == l)
            {
                pq.push(M);
            }
        }

        bool flag = true;
        int q = 0;
        int len = 0;
        if (pq.empty() or k > pq.size())
        {
            flag = false;
        }
        else
        {

            while (q < k)
            {
                len += pq.top();
                pq.pop();
                q++;
            }
        }
        if (!flag)
            cout << -1 << br;
        else
            cout << len << br;
    }
    return 0;
}