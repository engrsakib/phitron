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
void print_do(Node *head)
{
    Node *tmp = head;
    while(tmp != NULL)
    {
        cout << tmp->val << " " ;
        tmp = tmp->next;
    }
    cout << endl;
}
int size_do(Node *head)
{
    Node *temp = head;
    int cnt;
    while(temp != NULL)
    {
        cnt++;
        temp = temp->next;
    }
    return cnt;
}
void insert(Node *head, int pos, int val)
{
    Node *new_Node = new Node(val);
    Node *temp = head;
    for(int i = 1; i <= pos - 1; i++)
    {
        temp = temp->next;
    }
    new_Node->next = temp->next;
    temp->next = new_Node;
    
}
int main() 
{
    //Md. Nazmus Sakib
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    Node *head = new Node(5);
    Node *a = new Node(51);
    Node *b = new Node(555);
    Node *c = new Node(500);
    head->next = a;
    a->next = b;
    b->next = c;
    print_do(head);
    int pos, val;
    cin >> pos >> val;
    
    if(pos < size_do(head))
    {
        cout << "Invalid size" << endl;
    }
    else
    {
        insert(head, pos, val);
        print_do(head);
    }
    return 0;
}