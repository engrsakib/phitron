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
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int cnt = 0;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] - 1 == i)
            {
                swap(arr[i], arr[i + 1]);
                cnt++;
            }
        }
        cout << cnt << endl;
    }
    return 0;
}