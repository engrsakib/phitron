#include <bits/stdc++.h>

using namespace std;
#define lls long long
class Edge
{
public:
    lls a, b, c;
    Edge(lls a, lls b, lls c)
    {
        this->a = a;
        this->b = b;
        this->c = c;
    }
};
int main()
{
    // Md. Nazmus Sakib
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    lls n, e;
    cin >> n >> e;
    vector<Edge> v;
    while (e--)
    {
        lls a, b, c;
        cin >> a >> b >> c;
        v.push_back(Edge{a, b, c});
    }
    lls dis[n];
    for (int i = 0; i <= n; i++)
    {
        dis[i] = LLONG_MAX;
    }
    long long int s;
    cin >> s;
    dis[s] = 0;
    bool flag = false;
    for (int i = 1; i <= n; i++)
    {
        for (auto ed : v)
        {
            lls u = ed.a, v = ed.b, w = ed.c;
            if (dis[u] < LONG_MAX && dis[u] + w < dis[v])
            {
                // path relax
                dis[v] = dis[u] + w;
            }
        }
    }
    for (auto ed : v)
    {
        lls u = ed.a, v = ed.b, w = ed.c;
        if ((dis[u] < INT_MAX) and (dis[u] + w < dis[v]))
        {
            flag = true;
            break;
            dis[v] = dis[u] + w;
        }
    }
    lls x;
    cin >> x;
    while (x--)
    {
        lls y;
        cin >> y;
        if (!flag)
        {
            if (dis[y] == LLONG_MAX)
            {
                cout << "Not Possible" << endl;
            }
            else
            {
                cout << dis[y] << endl;
            }
        }
        else
        {
            cout << "Negative Cycle Detected" << endl;
            break;
        }
    }
    return 0;
}
