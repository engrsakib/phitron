#include <bits/stdc++.h>

using namespace std;
const int N = 100;
int parent[N];
int grupe_size[N];
class Edge
{
public:
    int u, v, w;
    Edge(int u, int v, int w)
    {
        this->u = u;
        this->v = v;
        this->w = w;
    }
};
bool cmp(Edge a, Edge b)
{
    return a.w < b.w;
}
void dsu_initianilize(int n)
{
    for (int i = 0; i < n; i++)
    {
        parent[i] = -1;
        grupe_size[i] = 1;
    }
}
int dsu_find(int node)
{
    if (parent[node] == -1)
        return node;
    int leader = dsu_find(parent[node]);
    parent[node] = leader;
    return leader;
}
void dsu_union_by_size(int node1, int node2)
{
    int leaderA = dsu_find(node1);
    int leaderB = dsu_find(node2);
    if (grupe_size[leaderA] > grupe_size[leaderB])
    {
        parent[leaderB] = leaderA;
        grupe_size[leaderA] += grupe_size[leaderB];
    }
    else
    {
        parent[leaderA] = leaderB;
        grupe_size[leaderB] += grupe_size[leaderA];
    }
}
int main()
{
    // Md. Nazmus Sakib
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    vector<Edge> edj;
    int n, e;
    cin >> n >> e;
    dsu_initianilize(n);
    while (e--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        edj.emplace_back(Edge(a, b, c));
    }
    sort(edj.begin(), edj.end(), cmp);
    int total_cost = 0;
    for (auto cld : edj)
    {
        auto leaderU = dsu_find(cld.u);
        int leaderV = dsu_find(cld.v);
        if (leaderU == leaderV)
            continue;
        else
        {
            dsu_union_by_size(cld.u, cld.v);
            total_cost += cld.w;
        }
    }
    cout << total_cost << endl;
    return 0;
}
