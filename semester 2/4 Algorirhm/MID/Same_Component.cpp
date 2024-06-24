#include <bits/stdc++.h>

using namespace std;
const int C = 1005;
char a[C][C];
bool visit[C][C];
int level[C][C];
int n, e;
vector<pair<int, int>> v = {{-1, 0}, {1, 0}, {0, 1}, {0, -1}};
bool valid(int si, int sj)
{
    if ((si < 0 || sj < 0) || (si >= n || sj >= e))
    {
        return false;
    }
    else
        return true;
}
void bfs(int si, int sj)
{
    queue<pair<int, int>> q;
    q.push({si, sj});
    visit[si][sj] = true;
    level[si][sj] = 0;
    while (!q.empty())
    {
        pair<int, int> p = q.front();
        q.pop();

        for (int i = 0; i < 4; i++)
        {
            int m = p.first + v[i].first;
            int n = p.second + v[i].second;
            if ((valid(m, n) and !visit[m][n]) and a[m][n] == '.')
            {
                q.push({m, n});
                visit[m][n] = true;
                level[m][n] = level[p.first][p.second] + 1;
            }
        }
    }
}
int main()
{
    // Md. Nazmus Sakib
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    memset(visit, false, sizeof(visit));
    memset(level, -1, sizeof(level));
    cin >> n >> e;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < e; j++)
        {
            cin >> a[i][j];
        }
    }
    int si, sj, ri, rj;
    cin >> si >> sj >> ri >> rj;

    bfs(si, sj);
    if (level[ri][rj] >= 0)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    return 0;
}
