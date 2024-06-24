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
void insert_head(Node *&head, Node *&tail, int val)
{
    Node *new_Node = new Node(val);
    if(head == tail)
    {
        head = new_Node;
        tail = new_Node;
    }
    new_Node->next = head;
    head = new_Node;
}
void insert_tail(Node *&head, Node *&tail, int val)
{
    Node *new_Node = new Node(val);
    if(head == tail)
    {
        head = new_Node;
        tail = new_Node;
    }
    tail->next = new_Node;
    tail = new_Node;
}
void print_it(Node *head)
{
    Node *temp = head;
    while(temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
}
int main() 
{
    //Md. Nazmus Sakib
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    Node *head = new Node(5);
    Node *a = new Node(15);
    Node *b = new Node(25);
    Node *c = new Node(35);
    Node *tail = new Node(40);

    head->next = a;
    a->next = b;
    b->next = c;
    c->next = tail;

    print_it(head);
    cout << endl;
    insert_tail(head,tail, 50);
    print_it(head);
    cout << endl;
    insert_head(head,tail, 500);
    cout << endl;
    print_it(head);
    return 0;
}
