#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string str1, str2;
        cin >> str1 >> str2;
        if (str1 == str2)
        {
            cout << "Yes" << endl;
        }
        else
        {
            int flag = true;
            for (int i = 0; i < n - 1; i++)
            {
                if (str1[i] != str2[i] and str1[i + 1] != str2[i + 1])
                {
                    flag = false;
                    break;
                }
            }
            if (flag)
            {
                cout << "Yes" << endl;
            }
            else
            {
                cout << "No" << endl;
            }
        }
    }
    return 0;
}