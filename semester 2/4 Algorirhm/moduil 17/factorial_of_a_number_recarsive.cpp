#include <bits/stdc++.h>
class Solution{
    public:
    int fact(int n)
    {
        if(n == 0) return 1;
        return fact(n - 1) * n;
    }
};
using namespace std;

int main() 
{
    //Md. Nazmus Sakib
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    Solution obj;
    int n;
    cin >> n;
    cout << obj.fact(n);
    return 0;
}
