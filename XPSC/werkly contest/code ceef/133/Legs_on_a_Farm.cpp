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
        ll N;
        cin >> N;
        int min_cows = N / 4; // Each cow has 4 legs
        int min_chickens = (N - min_cows * 4) / 2; // Each chicken has 2 legs

        // Output the total minimum number of animals
        cout << min_cows + min_chickens << endl;
    }
};
int main()
{
    // _Created :  08 May 2024 ||   20:32:27
    // _File    :  Legs_on_a_Farm.cpp
    //Writer    :  Md. Nazmus Sakib(engrsakib)
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    //اللهم صل على سيدنا محمدن النبى الامى وآله وسلم
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