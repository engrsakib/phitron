#include <bits/stdc++.h>

#define br "\n"
#define ll long long
#define yes cout << "YES\n"
#define no cout << "NO\n"
using namespace std;

int main()
{
    // _Created :  04 April 2024 ||   00:15:30
    // _File    :  A_Compare_T_Shirt_Sizes.cpp
    // Writer    :  Md. Nazmus Sakib
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    // اللهم صل على سيدنا محمدن النبى الامى وآله وسلم
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--)
    {
        string str1, str2;
        cin >> str1 >> str2;
        ll size1 = str1.length();
        ll size2 = str2.length();
        char cr1 = str1.back();
        char cr2 = str2.back();
        if (cr1 == cr2)
        {
            if (size1 == size2)
                cout << '=' << br;
            else if (cr1 == 'S')
            {

                if (size1 > size2)
                    cout << '<' << br;
                else
                    cout << '>' << br;
            }
            else
            {
                if (size1 < size2)
                    cout << '<' << br;
                else
                    cout << '>' << br;
            }
        }
        else
        {
            if (cr1 < cr2)
                cout << '>' << br;
            else
                cout << '<' << br;
        }
    }
    return 0;
}