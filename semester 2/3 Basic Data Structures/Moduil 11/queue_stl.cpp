#include <bits/stdc++.h>

using namespace std;

int main() 
{
    //Md. Nazmus Sakib
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    queue <int> sakib;
    int n;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        int val;
        cin >> val;
        sakib.push(val);
    }
    while(!sakib.empty())
    {
        cout << sakib.front() << " ";
        sakib.pop();
    }
    return 0;
}