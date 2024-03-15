#include <bits/stdc++.h>

using namespace std;

int main()
{
    // Md. Nazmus Sakib
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n, m, count = 0;
    cin >> n >> m;
    
    //cout << n << " " << m;
    for(int i = n; i <= m; i++)
    {
        count++;
    }
    cout << count;
    //if(n < m) cout << 0 << '\n';
    return 0;
}