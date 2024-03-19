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
        int n;
        cin >> n;
        char c;
        cin >> c;
        string str;
        cin >> str;
        vector<char> v;
        for (int i = 0; i < n; i++)
        {
            v.push_back(str[i]);
        }
        for (int i = 0; i < n; i++)
        {
            v.push_back(str[i]);
        }
        int MAX = INT_MIN;
        bool flag = true;
        int count = 0;
        for (int i = 0; i < v.size(); i++)
        {
            // cout << count << " ";
            if (v[i] == c && flag)
            {
                flag = false;
                count = 0;
            }
            if (!flag)
            {
                count++;
            }
            if (v[i] == 'g')
            {
                MAX = max(MAX, count);
                flag = true;
            }
        }
        cout << MAX - 1 << endl;
    }
    return 0;
}