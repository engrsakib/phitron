#include <bits/stdc++.h>

#define br "\n"
#define ll long long
#define yes cout << "YES\n"
#define no cout << "NO\n"
using namespace std;

int main()
{
    // _Created :  20 April 2024 ||   22:25:37
    // _File    :  C_Jumping_on_Tiles.cpp
    // Writer    :  Md. Nazmus Sakib
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    // اللهم صل على سيدنا محمدن النبى الامى وآله وسلم
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        ll n = s.length();
        vector<pair<char, int>> order;

        char min_char = min(s[0], s[n - 1]);
        char max_char = max(s[0], s[n - 1]);
        // cout << min_char << " " << max_char << br;

        for (int i = 0; i < n; i++)
        {
            if ((s[i] >= min_char and s[i] <= max_char))
            {
                order.push_back({s[i], i});
            }
        }
        sort(order.begin(), order.end(), [&](pair<char, int> a, pair<char, int> b)
             { return a.second < b.second; });
        if (order.size() > 2)
        {
            sort(order.begin() + 1, order.begin() + order.size() - 1, [&](pair<char, int> a, pair<char, int> b)
                 {
                if(s[0]>s[n-1]){
                    return a.first>b.first;
                }
                return a.first<b.first; });
        }
        vector<int> seq;

        ll moves = 0;

        seq.push_back(1);

        for (int i = 1; i < order.size(); i++)
        {
            moves += abs(order[i - 1].first - order[i].first);
            seq.push_back(order[i].second + 1);
        }

        cout << moves << " " << seq.size() << endl;

        for (auto i : seq)
        {
            cout << i << " ";
        }
        cout << endl;
    }
    return 0;
}