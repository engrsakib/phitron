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
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int j = 0; j < n; j++)
        {
            int op;
            cin >> op;
            for (int k = 0; k < op; k++)
            {
                char c;
                cin >> c;
                if (c == 'D')
                {
                    a[j]++;
                    //  cout << j << " ";
                    if (a[j] == 10)
                        a[j] = 0;
                }
                if (c == 'U')
                {
                    a[j]--;
                    if (a[j] == -1)
                        a[j] = 9;
                }
            }
        }
        for (int j = 0; j < n; j++)
        {
            cout << a[j] << " ";
        }
        cout << "\n";
    }
    return 0;
}