#include <bits/stdc++.h>

using namespace std;
int n, m;
vector<vector<char>> apprt;
bool visit[1005][1005];
int cnt_aprt = 0;

void dfs(int x, int y)
{
    int da[] = {-1, 1, 0, 0};
    int db[] = {0, 0, -1, 1};

    visit[x][y] = true;

    for (int i = 0; i < 4; i++)
    {
        int nr = x + da[i];
        int nc = y + db[i];

        if (nc >= 0 && nc < m && nr >= 0 && nr < n && apprt[nr][nc] == '.' && !visit[nr][nc])
        {
            dfs(nr, nc);
        }
    }
}

int main()
{
    cin >> n >> m;

    for (int i = 0; i < n; i++)
    {
        vector<char> row;
        for (int j = 0; j < m; j++)
        {
            char a;
            cin >> a;
            row.push_back(a);
        }
        apprt.push_back(row);
    }
    memset(visit, false, sizeof(visit));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (apprt[i][j] == '.' && !visit[i][j])
            {
                dfs(i, j);
                cnt_aprt++;
            }
        }
    }

    cout << cnt_aprt << endl;
    return 0;
}
