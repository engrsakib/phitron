#include <bits/stdc++.h>

using namespace std;
int rect(int n, int *b)
{
    *b = 100;
    if(n == 1)
        return 1;
    else
        return n *rect(n - 1, b);
}
int main() 
{
    //Md. Nazmus Sakib
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int n, a = 10;
    cin >> n;
    cout << rect(n, &a) << " " << a;
    return 0;
}
