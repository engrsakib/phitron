#include <bits/stdc++.h>

using namespace std;

int main() 
{
    //Md. Nazmus Sakib
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    map<string, double>mp;
    mp["Sakib"] = 75; //First Type for input
    mp.insert({"Miraz", 27}); // another one
    mp["Arif"] = 55;
    mp["Khan"] = 85;
    mp["Omar"] = 65;

    cout << mp["Sakib"] << endl; // cout first
    //second
    for(auto it = mp.begin(); it != mp.end(); it++)
    {
        cout << it->first << " " << it->second << endl;
    }
    cout << endl;
    //Check ase na ney

    if(mp.count("Sakib")) cout << "True";
    else cout << "False";
    return 0;
}
