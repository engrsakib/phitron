#include <bits/stdc++.h>

using namespace std;

int main() 
{
    //Md. Nazmus Sakib
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    priority_queue <int> pq;
    //min_heap = priority_queue <int, vector<int>, gretter<int>> pq;
    while(true)
    {
        int n;
        cin >> n;
        if(n == 0)
        {
            int m;
            cin >> m;
            pq.push(m);
        }
        else if(n == 1)
        {
            cout << "size: " << pq.size() << endl; 
        }
        else if(n == 2)
        {
            pq.pop(); 
        }
        else if(n == 3)
        {
            cout << pq.top(); 
        }
        else{
            break;
        }

    }
    return 0;
}
