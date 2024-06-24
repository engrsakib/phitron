#include <bits/stdc++.h>

using namespace std;

int main()
{
    // Md. Nazmus Sakib
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n, e;
    cin >> n >> e;
    vector<int> mat[n + 1];
    for (int i = 0; i < e; i++)
    {
        int left, right;
        cin >> left >> right;
        mat[left].push_back(right);
        mat[right].push_back(left);
    }
    int q;
    cin >> q;
    while (q--)
    {
        int x;
        cin >> x;
        if (mat[x].empty())
        {
            cout << -1 << endl;
        }
        else
        {
            sort(mat[x].rbegin(), mat[x].rend());
            for (int data : mat[x])
            {
                cout << data << " ";
            }
            cout << endl;
        }
    }
    return 0;
}
