#include <bits/stdc++.h>

using namespace std;
string isPalindrome(string S)
{
    string P = S;
    reverse(P.begin(), P.end());

   
    if (S == P)
    {
        
        return "Yes";
    }
    else
    {
        return "No";
    }
}
int main()
{
    // Md. Nazmus Sakib
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    string S;
    cin >> S;
    cout << isPalindrome(S);
    return 0;
}
