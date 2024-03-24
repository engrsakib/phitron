#include <bits/stdc++.h>
#define yes cout << "YES\n"
#define no cout << "NO\n"

using namespace std;

int main()
{
    // _Created : 24 March 2024 ||  01:32:04
    // _File    : M_Kalindrome_Array.cpp
    // Md. Nazmus Sakib
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
        vector<int> arr(n + 1);
        for (int i = 1; i <= n; i++)
        {
            cin >> arr[i];
        }
        vector<int> v;
        int l = -1, r = -1;
        for (int i = 1; i <= n / 2; i++)
        {
            if (arr[i] != arr[n - i + 1])
            {
                l = arr[i];
                r = arr[n - i + 1];
                break;
            }
        }
        bool flag = true;
        if (l == -1)
        {
            flag = true;
        }
        for (int i = 1; i <= n; i++)
        {
            if (arr[i] == l)
            {
                continue;
            }
            v.emplace_back(arr[i]);
        }
        vector<int> b = v;
        reverse(v.begin(), v.end());
        if (b == v)
        {
            flag = true;
        }
        else
        {
            v.clear();
            b.clear();
            for (int i = 1; i <= n; i++)
            {
                if (arr[i] == r)
                {
                    continue;
                }
                v.emplace_back(arr[i]);
            }
            b = v;
            reverse(v.begin(), v.end());
            if (v == b)
                flag = true;
            else
                flag = false;
        }
        if (flag)
            yes;
        else
            no;
    }
    return 0;
}