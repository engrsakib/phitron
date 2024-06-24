#include <bits/stdc++.h>
class Soluition{
    public:
    int fibo(int n)
    {
        if(n == 0 or n == 1) return n;
        return fibo(n - 1) + fibo(n - 2);
    }
};
using namespace std;

int main() 
{
    //Md. Nazmus Sakib
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    Soluition obj;
    int n;
    cin >> n;
    cout << obj.fibo(n);
    return 0;
}
