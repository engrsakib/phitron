#include <bits/stdc++.h>

using namespace std;
class Node{
    public:
        int val;
        Node *next;
};
int main() 
{
    //Md. Nazmus Sakib
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    Node a, b;
    a.val = 10;
    b.val = 45;
    a.next = &b;
    b.next = NULL;
    cout << a.val << " " << a.next->val;
    return 0;
}
