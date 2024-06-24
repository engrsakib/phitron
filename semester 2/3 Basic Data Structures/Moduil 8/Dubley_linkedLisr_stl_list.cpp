#include <bits/stdc++.h>

using namespace std;

int main() 
{
    //Md. Nazmus Sakib
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
   // list <int> my_List = {10, 104, 21}; 1st steap
   //list <int> my_List(5, 104); initialize 5 addres and fill up al avove by 104

    /* list <int> list2 = {104, 21, 105};
    list <int> my_List(list2);  list copy*/

    /* int a[5] = {104, 25, 103, 46, 48};
    list <int> my_List(a, a + 5); Array Copy*/

    vector <int> v = {140, 556, 487, 789};
    list <int> my_List(v.begin(), v.end());
    //Short CUT print
    for(int val : my_List)
    {
        cout << val << " ";
    }
    cout << endl;
    //Long CUT print
    for(auto it = my_List.begin(); it != my_List.end(); it++)
    {
        cout << *it << " ";
    }
    return 0;
}
