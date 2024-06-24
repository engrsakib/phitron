#include <bits/stdc++.h>

using namespace std;

int main() 
{
    //Md. Nazmus Sakib
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int n;
    cin >> n;
    vector <int> v(n);
    for(int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    for(int i = 0; i < n; i++)
    {
        if(v[i] < 0) v[i] = 2;
        else if(v[i] > 0) v[i] = 1;
        else  v[i] = 0;
    }
     //replace(v.begin(), v.end(), 2, 1);
     for(int m : v)
     {
        cout << m << " ";
     }
    return 0;
}
