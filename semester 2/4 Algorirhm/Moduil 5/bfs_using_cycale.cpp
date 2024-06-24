#include <bits/stdc++.h>

using namespace std;
const int N = 1e5;
bool visited[N];
vector<int> adj[N];
int parent_array[N];
bool ans;
void bfs(int s)
{
    queue<int>q;
    q.push(s);
    visited[s] = true;
    while(!q.empty())
    {
        int parent = q.front();
        cout << parent << " ";
        q.pop();
        for(int ab: adj[parent])
        {
            if(visited[ab] and parent_array[parent] != ab)
            {
                ans = true;
            }
            if(!visited[ab])
            {
                visited[ab] = true;
                parent_array[ab] = parent;
                q.push(ab);
            }
        }
    }
}
int main()
{
    // Md. Nazmus Sakib
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    memset(visited, false, sizeof(visited));
    memset(parent_array, false, sizeof(parent_array));
    int n, e;
    cin >> n >> e;
    while (e--)
    {
        int a, b;
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    ans = false;
    
    for(int i = 0; i < n; i++)
    {
        if(!visited[i])
        {
            bfs(0);
        }
    }
    if(ans) cout << "cycale Found" << endl;
    else cout << "Not Found";

    return 0;
}
