#include <bits/stdc++.h>

using namespace std;
int n, m;
const int cons = 1005;
vector<vector<char>> building;
bool visit[cons][cons];
vector<int> size_aprt;
bool apprt_hear = false;
void dfs(int x, int y, int &size)
{
    int dx[] = {-1, 1, 0, 0};
    int dy[] = {0, 0, -1, 1};
    visit[x][y] = true;

    for (int i = 0; i < 4; i++)
    {
        int nx = x + dx[i];
        int ny = y + dy[i];
        if ((nx >= 0 && nx < n) && (ny >= 0 && ny < m) && (building[nx][ny] == '.' && !visit[nx][ny]))
        {
            dfs(nx, ny, size);
        }
    }
    size++;
}
int main()
{
    // Md. Nazmus Sakib
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    cin >> n >> m;
    memset(visit, false, sizeof(visit));

    for (int i = 0; i < n; i++)
    {
        vector<char> a;
        for (int j = 0; j < m; j++)
        {
            char b;
            cin >> b;
            a.push_back(b);
        }
        building.push_back(a);
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (building[i][j] == '.' and !visit[i][j])
            {
                int size = 0;
                dfs(i, j, size);
                size_aprt.push_back(size);
                apprt_hear = true;
            }
        }
    }

    sort(size_aprt.begin(), size_aprt.end());

    if (!apprt_hear)

        cout << '0' << endl;

    for (int size : size_aprt)
    {
        cout << size << " ";
    }

    return 0;
}
