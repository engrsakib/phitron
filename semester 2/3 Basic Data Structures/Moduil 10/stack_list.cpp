#include <bits/stdc++.h>

using namespace std;
class my_stack
{
    public:
    list <int> sakib;
    void push(int val)
    {
        sakib.push_back(val);
    }
    void pop()
    {
        sakib.pop_back();
    }
    int top()
    {
        return sakib.back();
    }
    int size()
    {
        return sakib.size();
    }
    bool empty()
    {
        if(sakib.size() != 0) return false;
        else return true;
    }
};
int main() 
{
    //Md. Nazmus Sakib
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    my_stack sakib;
    int x;
    cin >> x;
    for(int i = 0; i < x; i++)
    {
        int val;
        cin >> val;
        sakib.push(val);
    }
    while(!sakib.empty())
    {
        cout << sakib.top() << " ";
        sakib.pop();
    }
    return 0;
}
