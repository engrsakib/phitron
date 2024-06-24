#include <bits/stdc++.h>

using namespace std;
class Node{
    public:
        int val;
        Node *next;
        Node(int val)
        {
            this->val = val;
            this->next = NULL;
        }
};
int main() 
{
    //Md. Nazmus Sakib
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    Node a(21);
    Node b(104);
    a.next = &b;

    cout << a.val << " " << a.next->val;
    return 0;
}
