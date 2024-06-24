#include <bits/stdc++.h>

using namespace std;
void fun(int *&p)
{
    p = NULL;
}
int main() 
{
    //Md. Nazmus Sakib
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int val = 10;
    int *ptr = &val;
    fun(ptr);
    cout << *ptr;
    return 0;
}