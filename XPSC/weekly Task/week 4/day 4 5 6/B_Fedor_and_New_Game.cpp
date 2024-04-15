#include <bits/stdc++.h>

#define br "\n"
#define ll long long
#define yes cout << "YES\n"
#define no cout << "NO\n"
using namespace std;

int main()
{
    // _Created :  15 April 2024 ||   19:25:49
    // _File    :  B_Fedor_and_New_Game.cpp
    // Writer    :  Md. Nazmus Sakib
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    // اللهم صل على سيدنا محمدن النبى الامى وآله وسلم
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n, m, p;
    cin >> n >> m >> p;

    vector<int> a(m + 1);
    for (int i = 0; i <= m; i++)
    {
        cin >> a[i];
    }

    vector<vector<int>> all_mask;
    int j = 0;
    while (j <= m)
    {
        vector<int> cnt;
        int k = 0;
        while (k <= n)
        {
            if ((a[j] >> k) & 1)
            {
                cnt.push_back(1);
            }
            else
            {
                cnt.push_back(0);
            }
            k++;
        }
        all_mask.push_back(cnt);
        j++;
    }

    int ans = 0;
    vector<int> game = all_mask[m];
    int i = 0;
    while (i < all_mask.size() - 1)
    {
        vector<int> v = all_mask[i];
        int cnt = 0;
        for (int k = 0; k < n; k++)
        {
            if (game[k] != v[k])
            {
                cnt++;
            }
        }
        if (cnt <= p)
        {
            ans++;
        }
        i++;
    }

    cout << ans << br;
    return 0;
}