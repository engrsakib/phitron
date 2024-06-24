#include <bits/stdc++.h>
#define ll long long
using namespace std;

class Edge
{
public:
    ll u, v, w;
    Edge(ll u, ll v, ll w)
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

const ll N = 15;
ll par[N];
ll grupe_rank[N];

void dsu_initialize(ll n)
{
    for (ll i = 0; i < n; i++)
    {
        par[i] = -1;
        grupe_rank[i] = 1;
    }
}

ll find(ll Node)
{
    if (par[Node] == -1)
        return Node;
    ll leader = find(par[Node]);
    par[Node] = leader;
    return leader;
}

void dsu_union_by_size(ll node1, ll node2)
{
    ll leaderA = find(node1);
    ll leaderB = find(node2);
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
int main()
{
    // Md. Nazmus Sakib
    /* Enter your code here. Read input from STDIN. Prll output to STDOUT */
    vector<Edge> v;
    ll n, e;
    cin >> n >> e;

    dsu_initialize(n);

    while (e--)
    {
        ll c, d, w;
        cin >> c >> d >> w;
        v.emplace_back(Edge(c, d, w));
    }

    sort(v.begin(), v.end(), cmp);

    ll total_cost = 0;
    ll connected_buildings = 0;

    for (auto ed : v)
    {
        ll leaderA = find(ed.u);
        ll leaderB = find(ed.v);

        if (leaderA != leaderB)
        {
            dsu_union_by_size(ed.u, ed.v);
            total_cost += ed.w;
            connected_buildings++;
        }

        if (connected_buildings == n - 1)
        {
            break; // All buildings are connected
        }
    }

    if (connected_buildings == n - 1)
    {
        cout << total_cost << endl;
    }
    else
    {
        cout << -1 << endl; // Not possible to connect all buildings
    }

    return 0;
}
