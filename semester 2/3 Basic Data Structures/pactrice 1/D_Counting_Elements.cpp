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
    int count = 0;
    for(int i = 0; i < n; i++)
    {
        if(find(v.begin(), v.end(), v[i + 1]) != v.end())
        {
            count++;
        }
    }
    cout << count;
    return 0;
}
