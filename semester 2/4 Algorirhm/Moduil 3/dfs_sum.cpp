#include <bits/stdc++.h>

using namespace std;
const int N = 1e5 + 5;
vector<int> v[N];
bool vis[N];
int sum = 0;
void dfs(int src)
{
    cout << src << endl;
    //sum += src;
    vis[src] = true;
    for (int child : v[src])
    {
        if (vis[child] == false)
            dfs(child);
    }
}
int main()
{
    // Md. Nazmus Sakib
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n, e;
    cin >> n >> e;
    while (e--)
    {
        int a, b;
        cin >> a >> b;
        v[a].push_back(b);
        v[b].push_back(a);
    }
    memset(vis, false, sizeof(vis));
    dfs(4);
    cout << sum;
    return 0;
}