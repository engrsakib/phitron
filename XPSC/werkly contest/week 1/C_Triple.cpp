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
        int arr[n];
        int fre[n + 1] = {0};
        for (int i = 0; i < n; i++)
        {

            cin >> arr[i];
            fre[arr[i]]++;
        }
        bool flag = false;
        for (int i = 0; i <= n; i++)
        {
            if (fre[i] >= 3)
            {
                cout << i << '\n';
                flag = true;
                break;
            }
        }
        if (!flag)
            cout << -1 << '\n';
    }
    return 0;
}