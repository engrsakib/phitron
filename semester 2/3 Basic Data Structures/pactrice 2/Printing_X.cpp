#include <bits/stdc++.h>

using namespace std;

int main() 
{
    //Md. Nazmus Sakib
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int n;
    cin >> n;
    int x , y;
    for(x = 0; x < n; x++)
    {
        for(y = 0; y < n; y++)
        {
            if(x == y && x + y == n - 1)
            {
                cout << 'X';
            }
            else if(x == y)
            {
                cout << '\\';
            }
            else if(x + y == n - 1)
            {
                cout << '/';
            }
            
            else cout << " ";
        }
        cout << endl;
    }
    return 0;
}
