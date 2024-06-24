#include <bits/stdc++.h>

using namespace std;

int N, M;
vector<vector<char>> building;
vector<vector<bool>> visited;
vector<int> ap_sz;

void dfs(int x, int y, int &size)
{
    int dx[] = {-1, 1, 0, 0};
    int dy[] = {0, 0, -1, 1};
    visited[x][y] = true;

    for (int i = 0; i < 4; i++)
    {
        int nx = x + dx[i];
        int ny = y + dy[i];
        if (nx >= 0 && nx < N && ny >= 0 && ny < M && building[nx][ny] == '.' && !visited[nx][ny])
        {
            dfs(nx, ny, size);
        }
    }
    size++;
}

int main()
{
    cin >> N >> M;
    building.resize(N, vector<char>(M));
    visited.resize(N, vector<bool>(M, false));

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            cin >> building[i][j];
        }
    }

    bool apt_Ext = false;

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            if (building[i][j] == '.' && !visited[i][j])
            {
                int size = 0;
                dfs(i, j, size);
                ap_sz.push_back(size);
                apt_Ext = true;
            }
        }
    }

    if (!apt_Ext)
    {
        cout << 0;
    }
    else
    {
        sort(ap_sz.begin(), ap_sz.end());

        for (int size : ap_sz)
        {
            cout << size << " ";
        }
    }

    return 0;
}
