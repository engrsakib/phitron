#include <bits/stdc++.h>

#define br "\n"
#define ll long long
#define yes cout << "YES\n"
#define no cout << "NO\n"
using namespace std;

int main()
{
    // _Created :  29 March 2024 ||   21:11:21
    // _File    :  A_Is_It_a_Cat.cpp
    // Writer    :  Md. Nazmus Sakib
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    // اللهم صل على سيدنا محمدن النبى الامى وآله وسلم
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        string s;
        cin >> n >> s;
        for (char &c : s)
        {
            c = tolower(c);
        }
        string mm = "meow";
        string ss = "";
        // cout << s << br;
        for (int i = 0; i < n; i++)
        {
            if (ss.empty() or ss.back() != s[i])
                ss.push_back(s[i]);
        }
        // cout << ss << " " << mm << br;
        if (ss == mm)
            yes;
        else
            no;
    }
    return 0;
}