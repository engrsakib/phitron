#include <bits/stdc++.h>
#define ll long long
using namespace std;
const ll N = 1e3 + 5;
ll n, m;
ll di, dj;
char matrix[N][N];
bool visited[N][N];
pair<ll, ll> parent[N][N];
bool reached = false;
vector<pair<ll, ll>> direction = {{0, 1}, {0, -1}, {-1, 0}, {1, 0}};
bool valid(ll i, ll j)
{
    if (i < 0 || i >= n || j < 0 || j >= m || matrix[i][j] == '#')
        return false;
    return true;
}

void bfs(ll si, ll sj)
{
    queue<pair<ll, ll>> q;
    q.push({si, sj});
    visited[si][sj] = true;
    parent[si][sj] = {0, 0};
    while (!q.empty())
    {
        pair<ll, ll> par = q.front();
        q.pop();
        ll pi = par.first;
        ll pj = par.second;
        if (pi == di && pj == dj)
        {
            reached = true;
            break;
        }
        for (ll i = 0; i < 4; i++)
        {
            ll ci = pi + direction[i].first;
            ll cj = pj + direction[i].second;
            if (valid(ci, cj) && !visited[ci][cj])
            {
                q.push({ci, cj});
                visited[ci][cj] = true;
                parent[ci][cj] = {pi, pj};
            }
        }
    }
}

int main()
{
    // Md. Nazmus Sakib
    /* Enter your code here. Read input from STDIN. Prll output to STDOUT */
    cin >> n >> m;
    ll si, sj;
    for (ll i = 0; i < n; i++)
    {
        for (ll j = 0; j < m; j++)
        {
            cin >> matrix[i][j];
            visited[i][j] = false;
            parent[i][j] = {-1, -1};
            if (matrix[i][j] == 'R')
            {
                si = i;
                sj = j;
            }
            if (matrix[i][j] == 'D')
            {
                di = i;
                dj = j;
            }
        }
    }

    bfs(si, sj);

    pair<ll, ll> des = {parent[di][dj].first, parent[di][dj].second};
    pair<ll, ll> src = {si, sj};

    if (reached)
    {
        while (des != src)
        {
            matrix[des.first][des.second] = 'X';
            des = parent[des.first][des.second];
        }
    }

    for (ll i = 0; i < n; i++)
    {
        for (ll j = 0; j < m; j++)
        {
            if (reached)
                cout << matrix[i][j];
            else
                cout << matrix[i][j];
        }
        cout << endl;
    }

    return 0;
}
