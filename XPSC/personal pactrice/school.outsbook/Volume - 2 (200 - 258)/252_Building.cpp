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
        int M, N, D, P, Q, T;
        cin >> M >> N >> D >> P >> Q >> T;

        int total_person_P = M * N * P;
        int total_days_P = M * N * D;
        long long total_charge_P = total_person_P * T;

        cout << "Total Person : " << total_person_P << endl;
        cout << "Total Days : " << total_days_P << endl;
        cout << "Total Charge : " << total_charge_P << endl;

        cout << endl;

        int total_person_Q = M * N * (P + Q);
        int total_days_Q = M * N * D * P / (P + Q);
        long long total_charge_Q = total_person_Q * T;

        cout << "Total Person : " << total_person_Q << endl;
        cout << "Total Days : " << total_days_Q << endl;
        cout << "Total Charge : " << total_charge_Q << endl;
    }
};
signed main()
{
    // _Created :  19 May 2024 ||   18:32:50
    // _File    :  252_Building.cpp
    // Writer    :  Md. Nazmus Sakib(engrsakib)
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    // اللهم صل على سيدنا محمدن النبى الامى وآله وسلم
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    t = 1;
    while (t--)
    {
        Solution obj;
        obj.solve();
    }
    return 0;
}