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
void delete_pos(Node *head, int pos)
{
    Node *temp = head;
    for(int i = 0; i < pos-1; i++)
    {
        temp = temp->next;
    }
    Node *delete_Node = temp->next;
    temp->next = temp->next->next;
    temp->next->prev = temp;
    delete delete_Node;
}
void delete_head(Node *&head)
{
   Node *delete_Node = head;
   head = head->next;
   delete delete_Node;
   head->prev = NULL;
    
}
void delete_tail(Node *&tail)
{ 
    Node *delet_Node = tail;
    tail = tail->prev;
    delete delet_Node;
    tail->next = NULL;

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
    Node *tail = new Node(70);

    head->next = a;
    a->next = b;
    a->prev = head;
    b->next = c;
    b->prev = a;
    c->next = d;
    c->prev = b;
    d->next = e;
    d->prev = c;
    e->next = tail;
    e->prev = d;
    tail->prev = e;
    print_normal(head);
    print_reverse(tail);
    int pos, val;
    cin >> pos;
    cout << "size : " << size_Node(head) << endl;
    if(pos == 0)
    {
        delete_head(head);
    }
    else if(pos == size_Node(head))
    {
        delete_tail(tail);
    }
    else if(pos >= size_Node(head))
    {
        cout << endl << "Invalid Possition" << endl;
        return 0;
    }
    else delete_pos(head, pos);
    cout << endl << "Updated List" << endl;
    cout << "size : " << size_Node(head) << endl;
    print_normal(head);
    print_reverse(tail);
    return 0;
}