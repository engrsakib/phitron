#include <bits/stdc++.h>

using namespace std;

int main() 
{
    //Md. Nazmus Sakib
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    vector <int> v = {10, 11, 21, 36, 40};
    vector <int> x = {101, 103, 104};
    v.insert(v.begin()+2, x.begin(), x.end());
    v.erase(v.begin()+0,v.end()-4);
    for(int x : v)
    {
        cout << x << " ";
    }
    cout << endl << v.size();
    return 0;
}
