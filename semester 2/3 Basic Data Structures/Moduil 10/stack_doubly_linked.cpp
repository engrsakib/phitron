#include <bits/stdc++.h>

using namespace std;
class Node{
    public:
        int val;
        Node *next;
        Node *prev;
        Node(int val)
        {
            this->prev = NULL;
            this->val = val;
            this->next = NULL;
        }
};
class my_stack
{
    public:
    Node *head = NULL;
    Node *tail = NULL;
    int sizes = 0;
    void push(int val)
    {
        Node *new_Node = new Node(val);
        sizes++;
        if(head == NULL)
        {
            head = tail = new_Node;
            return;
        }
        tail->next = new_Node;
        new_Node->prev = tail;
        tail = tail->next;
    }
    void pop()
    {
        sizes--;
        Node *delete_Noed = tail;
        tail = tail->prev;
        if(tail == NULL)
        {
            head == NULL;
        }
        else
        {
            tail->next = NULL;
        }
        delete delete_Noed;
    }
    int top()
    {
        return tail->val;
    }
    int size()
    {
        return sizes;
    }
    bool empty()
    {
        if(sizes != 0) return false;
        else return true;
    }
};
int main() 
{
    //Md. Nazmus Sakib
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    my_stack sakib;
    int x;
    cin >> x;
    for(int i = 0; i < x; i++)
    {
        int val;
        cin >> val;
        sakib.push(val);
    }
    while(!sakib.empty())
    {
        cout << sakib.top() << " ";
        sakib.pop();
    }
    return 0;
}