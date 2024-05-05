#include <bits/stdc++.h>

using namespace std;

int main() 
{
    //Md. Nazmus Sakib
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int n;
    cin >> n;
    int reverse = 0;

    while(n > 0)
    {
        int digit = n % 10;
        reverse = reverse * 10 + digit;
        n /= 10;
    }
    cout << reverse << endl;
    cin.ignore();
    return 0;
}
