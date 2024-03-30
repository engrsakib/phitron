#include <bits/stdc++.h>

#define br "\n"
#define ll long long
#define yes cout << "YES\n"
#define no cout << "NO\n"
using namespace std;

int main()
{
    // _Created :  30 March 2024 ||   00:51:07
    // _File    :  D_X_Sum.cpp
    // Writer    :  Md. Nazmus Sakib
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    // اللهم صل على سيدنا محمدن النبى الامى وآله وسلم
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        int arr[n][m];
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> arr[i][j];
            }
        }
        ll sum = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                ll tmp = 0;
                ll ik = i;
                ll jk = j;
                while (ik < n and jk < m)
                {
                    tmp += arr[ik++][jk++];
                }
                ik = i - 1;
                jk = j - 1;
                while (ik >= 0 and jk >= 0)
                {
                    tmp += arr[ik--][jk--];
                }
                ik = i - 1;
                jk = j + 1;
                while (ik >= 0 and jk < m)
                {
                    tmp += arr[ik--][jk++];
                }
                ik = i + 1;
                jk = j - 1;
                while (ik < n and jk >= 0)
                {
                    tmp += arr[ik++][jk--];
                }
                sum = max(sum, tmp);
            }
        }
        cout << sum << br;
    }
    return 0;
}