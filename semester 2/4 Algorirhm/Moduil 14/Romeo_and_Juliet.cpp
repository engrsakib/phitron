#include <bits/stdc++.h>

using namespace std;
const int N = 1e6;
vector<int> vt[N];
bool vis[N];
int dis[N];
void bfs(int src)
{
    queue<int> q;
    q.emplace(src);
    vis[src] = true;
    dis[src] = 0;
    while (!q.empty())
    {
        int parent = q.front();
        q.pop();
        for (auto child : vt[parent])
        {
            if (!vis[child])
            {
                vis[child] = true;
                q.emplace(child);
                dis[child] = dis[parent] + 1;
            }
        }
    }
}
int main()
{
    // Md. Nazmus Sakib
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    memset(vis, false, sizeof(vis));
    memset(dis, -1, sizeof(dis));
    int n, e;
    cin >> n >> e;
    while (e--)
    {
        int a, b;
        cin >> a >> b;
        vt[b].emplace_back(a);
        vt[a].emplace_back(b);
    }
    int src, d, k;
    cin >> src >> d >> k;
    bfs(src);
    if (dis[d] != -1 and dis[d] <= k * 2)
        cout << "YES";
    else
        cout << "NO";
    return 0;
}
