#include <bits/stdc++.h>

using namespace std;
const int N = 1e5;
bool visited[N];
bool path_visited[N];
vector<int> adj[N];
bool ans;
void dfs(int parent)
{
    visited[parent] = true;
    path_visited[parent] = true;
    cout << parent << " ";
    for (int chield : adj[parent])
    {
        if (path_visited[parent])
        {
            ans = true;
        }
        if (!visited[chield])
        {
            dfs(chield);
        }
    }
    path_visited[parent] = false;
}
int main()
{
    // Md. Nazmus Sakib
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    memset(visited, false, sizeof(visited));
    memset(path_visited, false, sizeof(path_visited));
    ans = false;
    int n, e;
    cin >> n >> e;
    while (e--)
    {
        int a, b;
        cin >> a >> b;
        adj[a].push_back(b);
        // adj[b].push_back(a);
    }
    for (int i = 0; i < n; i++)
    {
        if (!visited[i])
        {
            dfs(i);
        }
    }
    if (ans)
        cout << "cycale Found" << endl;
    else
        cout << "Not Found";

    return 0;
}
