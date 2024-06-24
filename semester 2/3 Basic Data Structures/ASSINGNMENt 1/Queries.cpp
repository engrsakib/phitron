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
void insert_tail(Node *&head, int val)
{
    Node *new_Node = new Node(val);
    if (head == NULL)
    {
        head = new_Node;
        return;
    }
    Node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = new_Node;
}
void delete_head(Node *&head)
{
    if (head == NULL)
    {
        return;
    }
    Node *delete_Node = head;
    head = head->next;
    delete delete_Node;
}
void delete_Node(Node *&head, Node *&tail, int index)
{
    Node *tmp = head;
    if (tmp == NULL)
    {
        return;
    }
    for (int i = 1; i <= index - 1; i++)
    {
        tmp = tmp->next;
        if (tmp == NULL)
        {
            return;
        }
    }
    if (tmp->next == NULL)
    {
        return;
    }
    Node *delete_Node = tmp->next;
    tmp->next = tmp->next->next;
    delete delete_Node;
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
        int x, y;
        cin >> x >> y;
        if (x == 0)
        {
            insert_head(head, tail, y);
        }
        else if (x == 1)
        {
            insert_tail(head, y);
        }
        else if (x == 2)
        {
            if (y == 0)
            {
                delete_head(head);
            }
            else
            {
                delete_Node(head, tail, y);
            }
        }
        print_Node(head);
    }
    return 0;
}
