#include <bits/stdc++.h>

using namespace std;
vector<pair<int, int>> directions = {{0, 1}, {0, -1}, {1, 0}, {-1, 0}};

int bfs(int sx, int sy, vector<vector<char>>& grid, int W, int H) {
    vector<vector<bool>> visited(H, vector<bool>(W, false));
    queue<pair<int, int>> q;

    q.push({sx, sy});
    visited[sx][sy] = true;
    int count = 1; // Counting the initial position

    while (!q.empty()) {
        int x = q.front().first;
        int y = q.front().second;
        q.pop();

        for (const auto& dir : directions) {
            int nx = x + dir.first;
            int ny = y + dir.second;

            if (nx >= 0 && nx < H && ny >= 0 && ny < W && !visited[nx][ny] && grid[nx][ny] == '.') {
                q.push({nx, ny});
                visited[nx][ny] = true;
                count++;
            }
        }
    }

    return count;
}
int main()
{
    // Md. Nazmus Sakib
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int T;
    cin >> T;

    for (int t = 1; t <= T; t++)
    {
        int W, H;
        cin >> W >> H;

        vector<vector<char>> grid(H, vector<char>(W));
        int sx, sy;

        for (int i = 0; i < H; ++i)
        {
            for (int j = 0; j < W; ++j)
            {
                cin >> grid[i][j];
                if (grid[i][j] == '@')
                {
                    sx = i;
                    sy = j;
                }
            }
        }

        int result = bfs(sx, sy, grid, W, H);
        cout << "Case " << t << ": " << result << endl;
    }

    return 0;
}
