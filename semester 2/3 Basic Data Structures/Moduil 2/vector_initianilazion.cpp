#include <bits/stdc++.h>

using namespace std;

int main() 
{
    //Md. Nazmus Sakib
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    //vector <int> v; 1st type
    //vector <int> v(5); 2nd type size Intializition
    //vector <int> v(5, 10); 3rd same data input
   /*  vector <int> v2 = {10, 15, 20, 22};
    vector <int> v(v2); Vector Cpy */
    int arr[6] = {10, 12, 20, 15, 25, 89};
    vector <int> v(arr, arr + 6);
    for(int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
    cout << v.size() << endl;
    return 0;
}
