#include <bits/stdc++.h>

using namespace std;

int main() 
{
    //Md. Nazmus Sakib
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int t;
    cin >> t;
    while(t--)
    {
        string a, b;
        cin >> a >> b;
    
        string word = "#";

         while( a.find(b)!=-1)
        {
            int found = a.find(b);
            int find = b.length();
            a.replace(found, find, word);
        }
        cout << a << endl;
    }
    return 0;
}
