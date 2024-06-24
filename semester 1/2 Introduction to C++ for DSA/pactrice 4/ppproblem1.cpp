#include <bits/stdc++.h>

using namespace std;
class Studnet{
    public:
    string name;
    int id;
    int mark;
};
int main() 
{
    //Md. Nazmus Sakib
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int n;
    cin >> n;
    Studnet *a = new Studnet[n];
    for(int i = 0; i < n; i++)
    {
        cin >> a[i].name >> a[i].id >> a[i].mark;
    }
    
    for(int i = 0; i < n - 1; i++)
    {
        for(int j = i + 1; j < n; j++)
        {
            if(a[i].mark < a[j].mark)
            {
                swap(a[i], a[j]);
            }
            else if(a[i].mark == a[j].mark)
            {
                if(a[i].id > a[j].id)
                {
                    swap(a[i], a[j]);
                }
            }
        }
    }
    for(int i = 0; i < n; i++)
    {
        cout << a[i].id << " " << a[i].name << " " << a[i].mark << endl;
    }
    return 0;
}
