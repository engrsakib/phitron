#include <bits/stdc++.h>

using namespace std;
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
int main()
{
    // Md. Nazmus Sakib
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n, e;
    bool cycle = false;
    cin >> n >> e;
    dsu_iniasalize(n);
    while (e--)
    {
        int a, b;
        cin >> a >> b;
        int leaderA = find(a);
        int leaderB = find(b);
        if (leaderA == leaderB)
            cycle = true;
        else
            dsa_union_by_size(a, b);
    }
    if (!cycle)
        cout << "Not_Found" << endl;
    else
        cout << "Found" << endl;
    return 0;
}
