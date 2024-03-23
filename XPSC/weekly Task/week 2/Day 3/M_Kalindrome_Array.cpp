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
        vector<int> arr(n);
        int count = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        vector<int> pln1;
        vector<int> pln2;
        int g, h;
        bool flag = true;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] != arr[n - i])
            {
                flag = false;
                g = arr[i];
                h = arr[n - 2 - i];
            }
        }
        if (!flag)
        {
            for (int i = 0; i < n; i++)
            {
                if (arr[i] != g)
                {
                    pln1.push_back(arr[i]);
                }
                if (arr[i] != h)
                {
                    pln2.push_back(arr[i]);
                }
            }
            bool flag1 = true;
            int l = pln1.size() - 1;
            bool flag2 = true;
            int r = pln2.size() - 1;

            for (int i = 0; i < l; i++)
            {
                if (pln1[i] != pln1[l])
                {
                    flag1 = false;
                }
            }

            for (int i = 0; i < r; i++)
            {
                if (pln2[i] != pln2[r])
                {
                    flag2 = false;
                }
            }

            if (flag1 || flag2)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
        else
        {
            cout << "YES" << endl;
        }
    }

    return 0;
}