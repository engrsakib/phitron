#include <bits/stdc++.h>

using namespace std;
class Edge{
    public:
    int u, v, w;
    Edge(int u, int v, int w)
    {
        this->u = u;
        this->v = v;
        this->w = w;
    }
};
void convert(vector<pair<int, int>> v[], int n)
{
    vector<Edge>edj;
    for(int i = 0; i < n; i++)
    {
        for(auto child : v[i])
        {
            int child_Node = child.first;
            int cost = child.second;
            edj.emplace_back(Edge(i, child_Node, cost));
        }
    }
    for(auto chld : edj)
    {
        cout << chld.u << " " << chld.v << " " << chld.w << endl;
    }
}
int main()
{
    // Md. Nazmus Sakib
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n, e;
    cin >> n >> e;
    vector<pair<int, int>> v[n];
    while(e--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        v[a].push_back({b, c});
        //v[b].push_back({a, c});
    }
    convert(v, n);
    return 0;
}
