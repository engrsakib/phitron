#include <bits/stdc++.h>

#define br "\n"
#define ll long long
#define yes cout << "YES\n"
#define no cout << "NO\n"
using namespace std;

const int maxN = (1 << 15);
vector<int> all_palindromes;
void mark_palindrome()
{
    int i = 0;
    while (i < maxN)
    {
        string s = to_string(i);
        int len = s.length();
        bool flag = true;
        int j = 0;
        while (j < (len / 2))
        {
            if (s[j] != s[len - j - 1])
            {
                flag = false;
                break;
            }
            j++;
        }
        if (flag)
        {
            all_palindromes.push_back(i);
        }
        i++;
    }
}

int main()
{
    // _Created :  15 April 2024 ||   20:03:26
    // _File    :  NASA.cpp
    // Writer    :  Md. Nazmus Sakib
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    // اللهم صل على سيدنا محمدن النبى الامى وآله وسلم
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    mark_palindrome();
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> cnt(maxN);
        vector<int> a;
        int i = 0;
        while (i < n)
        {
            int x;
            cin >> x;
            cnt[x]++;
            a.push_back(x);
            i++;
        }

        ll ans = n;
        int size = all_palindromes.size();
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < size; j++)
            {
                int curr = (a[i] ^ all_palindromes[j]);
                ans += cnt[curr];
            }
        }

        cout << (ans / 2) << br;
    }
    return 0;
}