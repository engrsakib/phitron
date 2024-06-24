#include <bits/stdc++.h>

using namespace std;
int n, m;
vector<vector<char>> building;
const int cons = 1001;
bool visit[cons][cons];
int count_aprt = 0;

void dfs(int x, int y)
{

    int dx[] = {-1, 1, 0, 0};
    int dy[] = {0, 0, -1, 1};

    visit[x][y] = true;

    for (int i = 0; i < 4; i++)
    {
        int nr = x + dx[i];
        int nc = y + dy[i];

        if ((nr >= 0 && nr < n) && (nc >= 0 && nc < m) && building[nr][nc] == '.' && !visit[nr][nc])
        {
            dfs(nr, nc);
        }
    }
}

int main()
{
    // Md. Nazmus Sakib
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    memset(visit, false, sizeof(visit));
    cin >> n >> m;

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
            if (building[i][j] == '.' && !visit[i][j])
            {
                dfs(i, j);
                count_aprt++;
            }
        }
    }

    cout << count_aprt << endl;
    return 0;
}
