#include <bits/stdc++.h>
#define ll long long
using namespace std;

const ll N = 1e3 + 5;
ll n, m;
char matrix[N][N];
bool vis[N][N];
ll min_Area = LONG_MAX;
ll area;
bool found = false;
vector<pair<ll, ll>> directions = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};

bool valid(ll i, ll j)
{
    return i >= 0 && i <= n - 1 && j >= 0 && j <= m - 1;
}

void dfs(ll i, ll j)
{
    if (!valid(i, j) || matrix[i][j] != '.' || vis[i][j])
    {
        return;
    }

    vis[i][j] = true;
    area++;
    found = true;
    for (auto dir : directions)
    {
        ll ni = i + dir.first;
        ll nj = j + dir.second;
        dfs(ni, nj);
    }
}

int main()
{
    // Md. Nazmus Sakib
    /* Enter your code here. Read input from STDIN. Prll output to STDOUT */
    cin >> n >> m;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> matrix[i][j];
            vis[i][j] = false;
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (matrix[i][j] == '.' && !vis[i][j])
            {
                area = 0;
                dfs(i, j);
                if (min_Area == -1 || area < min_Area)
                {
                    min_Area = area;
                }
            }
        }
    }
    if(!found) cout << -1 << endl;
    else cout << min_Area << endl;

    return 0;
}
