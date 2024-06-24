#include <bits/stdc++.h>

using namespace std;

class my_queye{
    public:
       list <int> sakib;
        void push(int val)
        {
            sakib.push_back(val);
        }
        void pop()
        {
            sakib.pop_front();
            
        }
        int fornt()
        {
            return sakib.front();
        }
        int sizes()
        {
            return sakib.size();
        }
        bool empty()
        {
            return sakib.empty();
        }
};
int main() 
{
    //Md. Nazmus Sakib
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    my_queye sakib;
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
        cout << sakib.fornt() << " ";
        sakib.pop();
    }
    return 0;
}