#include <bits/stdc++.h>
#define lls long long
#define lns int
using namespace std;
queue<pair<lns, lns>> q;
const int N = 100;
bool visit[N][N];
lns level[N][N];
lns n, e;
vector<pair<int, int>> v = {{-2, 1}, {-1, 2}, {1, 2}, {2, -1}, {2, 1}, {1, -2}, {-1, -2}, {-2, -1}};
bool valid(lns si, lns sj)
{
    if ((si < 0 || sj < 0) or (si >= n || sj >= e))
    {
        return false;
    }
    else
        return true;
}
void dfs(lns si, lns sj)
{

    q.push({si, sj});
    visit[si][sj] = true;
    level[si][sj] = 0;
    while (!q.empty())
    {
        pair<int, int> p = q.front();
        q.pop();
        for (int i = 0; i < 8; i++)
        {
            lns m = p.first + v[i].first;
            lns n = p.second + v[i].second;
            if (valid(m, n) == true and visit[m][n] == false)
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
    lns x;
    cin >> x;
    while (x--)
    {
        cin >> n >> e;
        lns si, sj;
        cin >> si >> sj;
        lns qi, qj;
        cin >> qi >> qj;
        memset(visit, false, sizeof(visit));
        memset(level, -1, sizeof(level));
        dfs(si, sj);
        cout << level[qi][qj] << endl;
    }
    return 0;
}
