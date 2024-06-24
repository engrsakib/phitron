#include <bits/stdc++.h>

using namespace std;
class Solution{
    public:
    int sum = 0;
    int fun(int b, int d)
    {
        if(b == d) return 0;
        fun(b + 1, d);
        sum += b;
        cout << b << " ";
        return sum;
    }
};
int main() 
{
    //Md. Nazmus Sakib
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int n, m;
    Solution obj;
    cin >> n >> m;
    int a = obj.fun(n, m + 1);
    cout << endl << a;
    return 0;
}