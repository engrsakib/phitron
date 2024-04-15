#include <bits/stdc++.h>

#define br cout << "\n"
#define yes cout << "YES\n"
#define no cout << "NO\n"

using namespace std;

int main()
{
    // _Created :  26 March 2024 ||   01:42:02
    // _File    :  F_Segments_with_Small_Spread.cpp
    // Writer    :  Md. Nazmus Sakib
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    // اللهم صل على سيدنا محمدن النبى الامى وآله وسلم
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    long long n, s;
    cin >> n >> s;
    vector<long long> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    long long l = 0, r = 0, ans = 0;
    multiset<long long> ms;
    while (r < n)
    {
        ms.insert(v[r]);
        long long mn = *ms.begin();
        long long mx = *ms.rbegin();
        if (abs(mx - mn) <= s)
        {
            ans += (r - l + 1);
        }
        else
        {
            while (l < r)
            {
                mn = *ms.begin();
                mx = *ms.rbegin();
                if ((mx - mn) <= s)
                {
                    break;
                }
                auto it = ms.find(v[l]);
                ms.erase(it);
                l++;
            }
            mn = *ms.begin();
            mx = *ms.rbegin();
            if ((mx - mn) <= s)
            {
                ans += (r - l + 1);
            }
        }
        r++;
    }
    cout << ans;
    br;
    return 0;
}