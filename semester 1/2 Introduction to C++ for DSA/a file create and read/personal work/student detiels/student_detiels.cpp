#include <bits/stdc++.h>

using namespace std;

int main() 
{
    //Md. Nazmus Sakib
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    ofstream file;
    file.open("Student_detiels.txt", ios::out|ios::app);
   // file << "Roll" << "\t" << "Name" << "\t" << "Age" << endl;
    int n;
    cin >> n; 
    for(int i = 1; i <= n; i++)
    {
        int b; int a; string c;
        cin >> a;
        getline(cin, c);
        cin >> b;
        cin.ignore();
        file << a << "\t" << c << "\t" << b << endl;
    }

    return 0;
}
