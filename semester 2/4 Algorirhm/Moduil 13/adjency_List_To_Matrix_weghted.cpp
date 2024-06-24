#include <bits/stdc++.h>

using namespace std;
void convert(vector<pair<int, int>> adj[], int n)
{
    int mat[n][n];
    // memset
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            // all value
            mat[i][j] = -1;
            if (i == j) // corner value
                mat[i][j] = 1;
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (auto child : adj[i])
        {
           int child_Node = child.first;
           int cost = child.second;
           mat[i][child_Node] = cost;
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
}
int main()
{
    // Md. Nazmus Sakib
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n, e;
    cin >> n >> e;
    vector<pair<int, int>> v[n];
    while (e--)
    {
        int a, b, w;
        cin >> a >> b >> w;
        v[b].push_back({a, w});
        v[a].push_back({b, w});
    }
    convert(v, n);
    return 0;
}