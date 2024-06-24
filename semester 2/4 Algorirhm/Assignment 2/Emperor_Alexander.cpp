#include <bits/stdc++.h>

using namespace std;
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

const ll N = 1e6;
ll parent[N];
ll grupe_rank[N];

void dsu_initialize(ll n)
{
    for (ll i = 0; i < n; i++)
    {
        parent[i] = -1;
        grupe_rank[i] = 1;
    }
}

ll find(ll Node)
{
    if (parent[Node] == -1)
        return Node;
    ll leader = find(parent[Node]);
    parent[Node] = leader;
    return leader;
}

void dsu_union_by_size(ll node1, ll node2)
{
    ll leaderA = find(node1);
    ll leaderB = find(node2);
    if (grupe_rank[leaderA] > grupe_rank[leaderB])
    {
        parent[leaderB] = leaderA;
        grupe_rank[leaderA] += grupe_rank[leaderB];
    }
    else
    {
        parent[leaderA] = leaderB;
        grupe_rank[leaderB] += grupe_rank[leaderA];
    }
}
int main()
{
    // Md. Nazmus Sakib
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    vector<Edge> v;
    ll n, e;
    cin >> n >> e;

    dsu_initialize(n);

    while (e--)
    {
        ll a, b, w;
        cin >> a >> b >> w;
        v.emplace_back(Edge(a, b, w));
    }

    sort(v.begin(), v.end(), cmp);

    ll min_Cost = 0;
    ll removed_Edges = 0;
    ll city_Groups = 0;

    for (auto ed : v)
    {
        ll leaderA = find(ed.u);
        ll leaderB = find(ed.v);

        if (leaderA == leaderB)
        {
            removed_Edges++;
            continue;
        }
        else
        {
            dsu_union_by_size(ed.u, ed.v);
            min_Cost += ed.w;
        }
    }

    for (ll i = 0; i < n; i++)
    {
        if (parent[i] == -1)
        {
            city_Groups++;
        }
    }
    if (city_Groups > 1)
        cout << "Not Possible" << endl;
    else
        cout << removed_Edges << " " << min_Cost << endl;
    return 0;
}
