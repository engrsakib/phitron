#include <bits/stdc++.h>

#define br "\n"
#define ll long long
#define yes cout << "YES\n"
#define no cout << "NO\n"
using namespace std;

int main()
{
    // _Created :  24 April 2024 ||   00:16:14
    // _File    :  Chef_and_Coupon.cpp
    // Writer    :  Md. Nazmus Sakib
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    // اللهم صل على سيدنا محمدن النبى الامى وآله وسلم
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int d, c;
        cin >> d >> c;
        int arr[2];
        int cnt = 0;
        for (int i = 0; i < 2; i++)
        {
            int a, b, c;
            cin >> a >> b >> c;
            arr[i] = a + b + c;
            if (arr[i] < 150)
            {
                cnt++;
            }
        }

        int val1 = cnt * d + c + arr[0] + arr[1];
        int val2 = 2 * d + arr[0] + arr[1];
        if (val1 < val2)
        {
            yes;
        }
        else
        {
            no;
        }
    }

    return 0;
}