#include <bits/stdc++.h>

using namespace std;

int main() 
{
    //Md. Nazmus Sakib
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int n;
    cin >> n;
    int mat[n][n];
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cin >> mat[i][j];
        }
    }
    vector <pair<int, int>> v[n];
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if(mat[i][j] > 0 and i != j)
            {
                v[i].push_back({j, mat[i][j]});
            }
        }
    }
    for(int i = 0; i < n; i++)
    {
        cout << i << "->" << " ";
        for(auto child : v[i])
        {
            cout <<"{" << child.first << ", " << child.second << "} ";
        }
        cout << endl;
    }
    return 0;
}