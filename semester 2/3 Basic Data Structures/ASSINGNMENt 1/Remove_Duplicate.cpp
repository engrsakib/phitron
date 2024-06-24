#include <bits/stdc++.h>

using namespace std;
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
void insert_Node(Node *&head, Node *&tail, int val)
{
    Node *new_Node = new Node(val);
    if (head == NULL)
    {
        head = new_Node;
        tail = new_Node;
        return;
    }
    tail->next = new_Node;
    tail = tail->next;
}
void check_duplicate(Node *head)
{
    Node *temp = head;

    for (Node *i = temp; i != NULL; i = i->next)
    {
        Node *new_Head = i;
        Node *j = i->next;
        while (j != NULL)
        {
            if (i->val == j->val)
            {
                Node *tmp = j;
                new_Head->next = j->next;
                j = j->next;
                delete tmp;
            }
            else
            {
                new_Head = j;
                j = j->next;
            }
        }
    }
}
void node_print(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
}
int main()
{
    // Md. Nazmus Sakib
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    Node *head = NULL;
    Node *tail = NULL;
    int val;
    while (true)
    {
        cin >> val;
        if (val == -1)
            break;
        else
            insert_Node(head, tail, val);
    }
    check_duplicate(head);
    node_print(head);
    return 0;
}
