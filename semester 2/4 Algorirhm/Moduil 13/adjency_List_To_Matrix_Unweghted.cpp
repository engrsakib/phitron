#include <bits/stdc++.h>

using namespace std;
void convert(vector<int> adj[], int n)
{
    int mat[n][n];
    memset(mat,0,sizeof(mat));
    for (int i = 0; i < n; i++)
    {
        for(int child : adj[i])
        {
            mat[i][child] = 1;
        }
    }
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
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
    vector<int> v[n];
    while (e--)
    {
        int a, b;
        cin >> a >> b;
        v[b].push_back(a);
        v[a].push_back(b);
    }
    convert(v, n);
    return 0;
}
