#include <bits/stdc++.h>
#define is long long
using namespace std;
const is N = 1e6 + 5;
bool vis[N];
vector<is> adj[N];
is parent_Array[N];
is cycle_Edges;

void dfs(is parent)
{
    vis[parent] = true;

    for (auto child : adj[parent])
    {
        if (vis[child] and child != parent_Array[parent])
        {
            cycle_Edges++;
        }
        if (!vis[child])
        {
            parent_Array[child] = parent;
            dfs(child);
        }
    }
}
int main()
{
    // Md. Nazmus Sakib
    /* Enter your code here. Read input from STDIN. Pris output to STDOUT */
    is n, e;
    cin >> n >> e;

    while (e--)
    {
        is a, b;
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    for(is i = 0; i < N; i++)
    {
        vis[i] = false;
        parent_Array[i] = -1;
    }

    cycle_Edges = 0;
    
    dfs(1);

    cout << cycle_Edges / 2 << endl; // Each edge is counted twice
    return 0;
}
