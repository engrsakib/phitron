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
class my_queye{
    public:
        Node *head = NULL;
        Node *tail = NULL;
        int count = 0;
        void push(int val)
        {
            Node *new_Node = new Node(val);
            count++;
            if(head == NULL)
            {
                head = new_Node;
                tail = new_Node;
                return;
            }
            tail->next = new_Node;
            tail = new_Node;
        }
        void pop()
        {
            Node *delete_Node = head;
            count--;
            head = head->next;
            delete delete_Node;
            if(head == NULL)
            {
                tail = NULL;
            }
        }
        int fornt()
        {
            return head->val;
        }
        int sizes()
        {
            return count;
        }
        bool empty()
        {
            if(count == 0) return true;
            else return false;
        }
};
int main() 
{
    //Md. Nazmus Sakib
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    my_queye sakib;
    int n;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        int val;
        cin >> val;
        sakib.push(val);
    }
    while(!sakib.empty())
    {
        cout << sakib.fornt() << " ";
        sakib.pop();
    }
    return 0;
}
