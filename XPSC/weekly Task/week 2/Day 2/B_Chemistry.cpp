#include <bits/stdc++.h>

using namespace std;

int main()
{
    // Md. Nazmus Sakib
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int size, k;
        cin >> size >> k;
        // cout << t << endl;
        string s;
        int freq[26] = {0};
        cin >> s;
        for (int i = 0; i < s.length(); i++)
        {
            freq[s[i] - 'a']++;
        }
        bool flag = true;
        int odd = 0;
        for (int i = 0; i < 26; i++)
        {
            if (freq[i] % 2 == 1)
                odd++;
        }
        if (k + 1 >= odd)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}