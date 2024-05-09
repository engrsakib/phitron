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
        int N;
        cin >> N;

        vector<int> A(N);
        for (int i = 0; i < N; ++i)
        {
            cin >> A[i];
        }

        int count = 0;
        for (int i = 0; i < N - 1; ++i)
        {
            for (int j = i + 1; j < N; ++j)
            {
                if (A[i] <= A[j])
                { // Check the condition
                    count++;
                }
            }
        }

        cout << count << endl;
    }
};
int main()
{
    // _Created :  08 May 2024 ||   20:41:02
    // _File    :  Powered_Parameters.cpp
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