#include <bits/stdc++.h>

using namespace std;
class Edge
{
public:
    int u;
    int v;
    int w;
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
// DSU Start
const int N = 15;
int par[N];
int grupe_rank[N];
void dsu_iniasalize(int n)
{
    for (int i = 0; i < n; i++)
    {
        par[i] = -1;
        grupe_rank[i] = 1;
    }
}
int find(int Node)
{
    if (par[Node] == -1)
        return Node;
    int leader = find(par[Node]);
    par[Node] = leader;
    return leader;
}
void dsa_union_by_size(int node1, int node2)
{
    int leaderA = find(node1);
    int leaderB = find(node2);
    if (grupe_rank[leaderA] > grupe_rank[leaderB])
    {
        par[leaderB] = leaderA;
        grupe_rank[leaderA] += grupe_rank[leaderB];
    }
    else
    {
        par[leaderA] = leaderB;
        grupe_rank[leaderB] += grupe_rank[leaderA];
    }
}
// DSU End
int main()
{
    // Md. Nazmus Sakib
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    vector<Edge> v;
    int n, e;
    cin >> n >> e;
    dsu_iniasalize(n);
    while (e--)
    {
        int c, d, w;
        cin >> c >> d >> w;
        v.emplace_back(Edge(c, d, w));
    }
    sort(v.begin(), v.end(), cmp);
    int total_cost = 0;
    cout << "Avilable Nodes are: "<<endl;
    for (auto ed : v)
    {
        // cout << ed.u << " " << ed.v << " " << ed.w << endl;
        int leaderA = find(ed.u);
        int leaderB = find(ed.v);
        if (leaderA != leaderB)
        {
            dsa_union_by_size(ed.u, ed.v);
            cout << ed.u << " " << ed.v << " " << ed.w << endl;
            total_cost += ed.w;
        }
        else
        {
            continue;
        }
    }
    cout << total_cost << " is the total cost of cannection";
    return 0;
}
