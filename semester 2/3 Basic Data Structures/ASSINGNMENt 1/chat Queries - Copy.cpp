#include <bits/stdc++.h>

using namespace std;
int count = 0;
class Node
{
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
    if (head == NULL)
    {
        head = new_Node;
        tail = new_Node;
        return;
    }
    

        new_Node->next = head;
        head = new_Node;
    
}
void insert_tail(Node *&head, Node *&tail, int val)
{
    Node *new_Node = new Node(val);
    if (head == NULL)
    {
        head = new_Node;
        tail = new_Node;
    }
    
    
        tail->next = new_Node;
        tail = new_Node;
    
}
void delete_Node(Node *&head, Node *&tail, int indx)
{
    if (head == NULL)
        return;
    if (indx == 0)
    {
        Node *tmp = head;
        head = head->next;
        if (head == NULL)
        {
            tail == NULL;
        }
        delete tmp;
        return;
    }
    Node *tmp = head;
    int cnt = 0;
    while (tmp != NULL && cnt < indx - 1)
    {
        tmp = tmp->next;
        cnt++;
    }
    if (tmp == NULL || tmp->next == NULL)
    {
        return;
    }
    Node *to_Delete = tmp->next;
    tmp->next = tmp->next->next;
    delete to_Delete;
}
void print_Node(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}
int main()
{
    // Md. Nazmus Sakib
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    Node *head = NULL;
    Node *tail = NULL;
    int q;
    cin >> q;
    while (q--)
    {
        int x, val;
        cin >> x >> val;
        if (x == 0)
        {
            insert_head(head, tail, val);
        }
        else if (x == 1)
        {
            insert_tail(head, tail, val);
        }
        else if(x == 2)
        {
            delete_Node(head, tail, val);
        }
        print_Node(head);
    }
    return 0;
}
