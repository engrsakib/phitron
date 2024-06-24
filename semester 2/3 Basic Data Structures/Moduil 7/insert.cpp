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
void print_normal(Node *head)
{
    Node *temp = head;
    while(temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}
void print_reverse(Node *tail)
{
    Node *temp = tail;
    while(temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->prev;
    }
    cout << endl;
}
void insert_pos(Node *head, int pos, int val)
{
    Node *new_Node = new Node(val);
    Node *temp = head;
    for(int i = 0; i <= pos-1; i++)
    {
        temp = temp->next;
    }
    new_Node->next = temp->next;
    temp->next = new_Node;
    new_Node->next->prev = new_Node;
    new_Node->prev = temp;
}
int size_Node(Node *head)
{
    int count = 0;
    Node *temp = head;
    while(temp != NULL)
    {
        count++;
        temp = temp->next;
    }
    return count;
}
int main() 
{
    //Md. Nazmus Sakib
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *c = new Node(40);
    Node *d = new Node(50);
    Node *e = new Node(60);
    Node *tail = e;

    head->next = a;
    a->next = b;
    a->prev = head;
    b->next = c;
    b->prev = a;
    c->next = d;
    c->prev = b;
    d->next = e;
    d->prev = c;
    e->prev = d;
    print_normal(head);
    print_reverse(tail);
    int pos, val;
    cin >> pos >> val;
    if(pos >= size_Node(head) - 1)
    {
        cout << endl << "Invalid Possition" << endl;
        return 0;
    }
    else insert_pos(head, pos, val);
    cout << "Updated List" << endl;
    print_normal(head);
    print_reverse(tail);
    return 0;
}
