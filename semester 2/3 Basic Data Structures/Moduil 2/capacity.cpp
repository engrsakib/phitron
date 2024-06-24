#include <bits/stdc++.h>

using namespace std;

int main() 
{
    //Md. Nazmus Sakib
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    vector <int> v;
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);
    v.push_back(50);
    v.push_back(70);
    v.push_back(80);//double increse size
    int size = v.size();
    v.resize(7);
    cout << size << endl;
    cout << v.max_size() << endl;
    cout << v.capacity() << endl;
    for(int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl << v.empty() << endl;
    return 0;
}
