#include <bits/stdc++.h>

#define br "\n"
#define ll long long
#define yes cout << "YES\n"
#define no cout << "NO\n"
using namespace std;
string reverseNumber(int x)
{
    string s = to_string(x);
    reverse(s.begin(), s.end());
    return s;
}
int main()
{
    // _Created :  17 April 2024 ||   20:34:01
    // _File    :  Swapping_Marks_Digits.cpp
    // Writer    :  Md. Nazmus Sakib
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    // اللهم صل على سيدنا محمدن النبى الامى وآله وسلم
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int T;
    cin >> T;
    while (T--)
    {
        int A, B;
        cin >> A >> B;

        string A_str = to_string(A);
        string B_str = to_string(B);

        string A_rev = reverseNumber(A);
        string B_rev = reverseNumber(B);

        int A_normal = stoi(A_str);
        int B_normal = stoi(B_str);
        int A_reversed = stoi(A_rev);
        int B_reversed = stoi(B_rev);

        bool canWin = false;

        if (A_normal > B_normal || A_normal > B_reversed ||
            A_reversed > B_normal || A_reversed > B_reversed)
        {
            canWin = true;
        }

        if (canWin) 
        {
            cout << "Yes\n";
        }
        else
        {
            cout << "No\n";
        }
    }
    return 0;
}