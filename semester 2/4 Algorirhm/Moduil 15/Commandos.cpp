#include <bits/stdc++.h>
using namespace std;
const int N = 105;
vector<int> v[N];
int dis_from_src[N];
int dis_from_des[N];
bool vis[N];
void bfs(int s, int track)
{
    queue<int> q;
    q.push(s);
    if (track == 1)
        dis_from_src[s] = 0;
    else
        dis_from_des[s] = 0;
    vis[s] = true;
    while (!q.empty())
    {
        int par = q.front();
        q.pop();
        for (int child : v[par])
        {
            if (!vis[child])
            {
                q.push(child);
                vis[child] = true;
                if (track == 1)
                    dis_from_src[child] = dis_from_src[par] + 1;
                else
                    dis_from_des[child] = dis_from_des[par] + 1;
            }
        }
    }
}
int main()
{
    int t;
    cin >> t;
    int cs = 1;
    while (t--)
    {
        int n, e;
        cin >> n >> e;
        while (e--)
        {
            int a, b;
            cin >> a >> b;
            v[a].push_back(b);
            v[b].push_back(a);
        }
        int s, d;
        cin >> s >> d;
        for (int i = 0; i < n; i++)
        {
            dis_from_src[i] = -1;
            vis[i] = false;
        }
        bfs(s, 1);
        for (int i = 0; i < n; i++)
        {
            dis_from_des[i] = -1;
            vis[i] = false;
        }
        bfs(d, 2);
        int ans = INT_MIN;
        for (int i = 0; i < n; i++)
        {
            int val = dis_from_src[i] + dis_from_des[i];
            ans = max(ans, val);
        }
        cout << "Case " << cs++ << ": " << ans << endl;
        for (int i = 0; i < n; i++)
        {
            v[i].clear();
        }
    }
    return 0;
}