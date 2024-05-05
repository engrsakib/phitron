#include <bits/stdc++.h>

#define br "\n"
#define ll long long
#define yes cout << "YES\n"
#define no cout << "NO\n"
using namespace std;

class Solution
{
public:
    void solve()
    {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        // for(int i = 0; i < n; i++)
        // {
        //     cout << v[i] << " ";
        // }
        // cout << br;
        int min_score = abs(v[0] - v[1]);

        int i = 1;
        int optimal_score = -1e9;
        while (i < n - 1)
        {
            optimal_score = max(abs(v[i] - v[i - 1]), abs(v[i] - v[i + 1]));
            min_score = min(min_score, optimal_score);
            i++;
        }
        min_score = min(min_score, abs(v[n - 1] - v[n - 2]));
        cout << min_score << endl;
    }
};
int main()
{
    // _Created :  05 May 2024 ||   9:33:49
    // _File    :  Maximise_Score.cpp
    // Writer    :  Md. Nazmus Sakib(engrsakib)
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    // اللهم صل على سيدنا محمدن النبى الامى وآله وسلم
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--)
    {
        Solution obj;
        obj.solve();
    }
    return 0;
}