#include <bits/stdc++.h>

#define br "\n"
#define ll long long
#define yes cout << "YES\n"
#define no cout << "NO\n"
using namespace std;

class Solution
{
public:
    const ll INF = 1e18;

    vector<ll> bellman_ford(ll N, const vector<ll> &A)
    {
        vector<ll> dist(N, INF);
        dist[0] = 0;

        for (ll i = 0; i < N - 1; i++)
        {
            for (ll u = 0; u < N; u++)
            {
                for (ll v = 0; v < N; v++)
                {
                    if (u == v)
                        continue;
                    ll weight = abs(v - u) * max(A[u], A[v]);
                    if (dist[u] != INF && dist[u] + weight < dist[v])
                    {
                        dist[v] = dist[u] + weight;
                    }
                }
            }
        }

        return dist;
    }

    void solve()
    {
        ll N;
        cin >> N;
        vector<ll> A(N);
        for (ll i = 0; i < N; i++)
        {
            cin >> A[i];
        }

        vector<ll> dist = bellman_ford(N, A);
        cout << dist[N - 1] << br;
    }
};

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--)
    {
        Solution obj;
        obj.solve();
    }
    return 0;
}
