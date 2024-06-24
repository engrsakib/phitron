#include <bits/stdc++.h>
#define lls long long
#define lns int
using namespace std;
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
    lns n, e;
    cin >> n >> e;
    vector<Edge> vct;
    while (e--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        vct.push_back(Edge{a, b, c});
    }
    lls dis[n];
    for (int i = 1; i <= n; i++)
    {
        dis[i] = INT_MAX;
    }
    int s;
    cin >> s;
    dis[s] = 0;

    for (int i = 1; i <= n; i++)
    {
        for (Edge child : vct)
        {
            lls u = child.a;
            lls v = child.b;
            lls w = child.c;
            if (dis[u] < INT_MAX and dis[u] + w < dis[v])
            {
                dis[v] = dis[u] + w;
            }
        }
    }
    lns x;
    cin >> x;
    while (x--)
    {
        lls y;
        lls z;
        cin >> y >> z;
        if (z >= dis[y])
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}
