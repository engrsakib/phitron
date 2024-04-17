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
        string s;
        cin >> s;
        string ans(n + 1, '0');

        int same = 0, noSame = 0, cnt = 0;
        for (int i = 0; i <= (n / 2) - 1; i++)
        {
            if (s[i] == s[n - i - 1])
            {
                same++;
            }
            else
                noSame++;
        }
        if (n % 2 == 1)
        {
            cnt++;
        }

        for (int i = 0; i <= same; i++)
        {
            for (int j = 0; j <= cnt; j++)
            {
                ans[noSame + i * 2 + j] = '1';
                //cout << noSame + i * 2 + j << " ";
            }
            cout << " ";
        }
        cout << same << endl;
       // cout << ans << endl;
    }
    return 0;
}