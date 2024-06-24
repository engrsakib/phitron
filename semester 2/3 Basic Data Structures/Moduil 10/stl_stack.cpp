#include <bits/stdc++.h>

using namespace std;

int main() 
{
    //Md. Nazmus Sakib
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    stack <int> st;
    int n;
    cin >> n;
    for(int i = 1; i <= n; i++)
    {
        int val;
        cin >> val;
        st.push(val);
    }
    while(!st.empty())
    {
        cout << st.top() << " ";
        st.pop();
    }
    return 0;
}