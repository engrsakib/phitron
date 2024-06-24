#include <bits/stdc++.h>

using namespace std;

int main() 
{
    //Md. Nazmus Sakib
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    set <int> s;
    vector <int> v;
    int n;
    cin >> n;
    while(n--)
    {
        int x;
        cin >> x;
        s.insert(x);
    }
    cout << "Assending Order" << endl;
    for(auto it = s.begin(); it != s.end(); it++)
    {
        cout << *it << " ";
       //for dessending order we can push it a vactor
       v.push_back(*it); 
    }
    cout << endl << "dessending Order" << endl;
    sort(v.rbegin(), v.rend());
    for(int nm : v)
    {
        cout << nm << " ";
    }
    //Search value
    if(!s.count(101)) cout << endl << "Not heare" << endl;
    else cout << "Yes, here";
    return 0;
}
