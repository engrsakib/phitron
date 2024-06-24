#include <bits/stdc++.h>

using namespace std;
int sum = -1;
int main() 
{
    //Md. Nazmus Sakib
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int n;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        int m;
        cin >> m;
        sum += m;
    }
    cout << sum + 1 << endl;
    return 0;
}
