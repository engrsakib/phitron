#include <bits/stdc++.h>

using namespace std;

int main() 
{
    //Md. Nazmus Sakib
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    ofstream file;
    file.open("personal_detiels.txt", ios::out|ios::app); //ios::out|ios::app Use for access append data in file.
    // If we not use ios::out|ios::app. when we insert new data the previous data had deleted.
    //By diffolt text
    file << "I'm Md. Nazmus Sakib. I'm a problem solver" << endl;
    string name;
    getline(cin, name);
    file << "Name : " << name << endl; 
    file.close();
    return 0;
}
