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
    while(t--)
    {
        int n;
        cin >> n;
        vector<int>v(n);
        for(int i = 1; i <= n; i++)
        {
            cin>> v[i];
        }
        for(int i = 1; i <= n; i++)
        {
            if(i % 2 == 0)
            {
                if(v[i] > v[i + 1])
                {
                    swap(v[i], v[i+1]);
                }
            }
            if(i % 2 == 1)
            {
                if(v[i] < v[i + 1])
                {
                    swap(v[i], v[i+1]);
                }
            }
            for(int a : v)
            {
                cout << a << " ";
            }
            
        }
        cout << endl;
    }
    return 0;
}