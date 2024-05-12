#include <bits/stdc++.h>

#define br "\n"
#define ll long long
#define yes cout << "YES\n"
#define no cout << "NO\n"
using namespace std;

class Solution
{
public:
    bool intersect(int a, int b, int c, int d)
    {
        // Check if the two line segments intersect
        if (max(a, b) < min(c, d) || min(a, b) > max(c, d))
            return false;
        return true;
    }

    void solve()
    {
       ll A, B, C, D;
       cin >> A >> B >> C >> D;
       if(A > B)
       {
        swap(A, B);
       }
       if(C > D)
       {
        swap(C, D);
       }

       if((C > A and C < B and D > B))
       {
        yes;
       }
       else if(D > A and D < B and C < A)
       {
        yes;
       }
       else
       {
        no;
       }
    }
};
int main()
{
    // _Created :  10 May 2024 ||   20:52:44
    // _File    :  C_Clock_and_Strings.cpp
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