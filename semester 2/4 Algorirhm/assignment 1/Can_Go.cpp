#include <bits/stdc++.h>

using namespace std;
const int cons = 1005;
char a[cons][cons];
bool visit[cons][cons];
int level[cons][cons];
int n, e;
vector<pair<int, int>> vect = {{-1, 0}, {1, 0}, {0, 1}, {0, -1}};
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
            int ir = p.first + vect[i].first;
            int jc = p.second + vect[i].second;
            if ((valid(ir, jc) && !visit[ir][jc]) && a[ir][jc] != '#')
            {
                q.push({ir, jc});
                visit[ir][jc] = true;
                level[ir][jc] = level[p.first][p.second] + 1;
            }
        }
    }
}
int main()
{
    // Md. Nazmus Sakib
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    cin >> n >> e;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < e; j++)
        {
            cin >> a[i][j];
        }
    }
    memset(visit, false, sizeof(visit));
    memset(level, -1, sizeof(level));
    int Ai, Aj, Bi, Bj;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < e; j++)
        {
            if (a[i][j] == 'A')
            {
                Ai = i;
                Aj = j;
            }
            else if (a[i][j] == 'B')
            {
                Bi = i;
                Bj = j;
            }
        }
    }
    bfs(Ai, Aj);
    if (level[Bi][Bj] > 0)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}
