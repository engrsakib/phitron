#include <bits/stdc++.h>

#define br "\n"
#define ll long long
#define yes cout << "YES\n"
#define no cout << "NO\n"
using namespace std;
const int mod = 1e9;
int main()
{
    // _Created :  23 April 2024 ||   21:22:44
    // _File    :  B_CodeChef_Streak.cpp
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
        cin >> n;
        vector<int> a(n);
        vector<int> b(n);
        int count1 = 0;
        int count2 = 0;

        int max1 = INT_MIN;
        int max2 = INT_MIN;

        int i = 0;
        while (i < n)
        {
            cin >> a[i];
            if (a[i])
            {
                count1++;
                max1 = max(max1, count1);
            }
            else
            {
                count1 = 0;
            }
            i++;
        }
        int j = 0;
        while (j < n)
        {
            cin >> b[j];
            if (b[j])
            {
                count2++;
                max2 = max(max2, count2);
            }
            else
            {
                count2 = 0;
            }
            j++;
        }

        if (max1 > max2)
        {
            cout << "Om\n";
        }
        else if (max1 == max2)
        {
            cout << "Draw\n";
        }
        else
        {
            cout << "Addy\n";
        }
    }
    return 0;
}