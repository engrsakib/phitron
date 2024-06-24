#include <bits/stdc++.h>

using namespace std;

int main() 
{
    //Md. Nazmus Sakib
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    vector <int> v = {8, 2, 8, 2, 4, 4, 8, 4, 2, 4, 8, 2};
    replace(v.begin(), v.end(), 4, 104);
    replace(v.begin(), v.end(), 2, 112);
    replace(v.begin(), v.end(), 8, 108);
    sort(v.begin(),v.end());
    for(int x : v)
    {
        cout << x << " ";
    }
    return 0;
}
