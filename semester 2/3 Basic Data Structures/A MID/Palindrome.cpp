#include <bits/stdc++.h>

using namespace std;
class Node
{
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
void inseart_tail(Node *&head, Node *&tail, int val)
{
    Node *new_Node = new Node(val);
    if (head == NULL)
    {
        head = new_Node;
        tail = new_Node;
        return;
    }
    tail->next = new_Node;
    new_Node->prev = tail;
    tail = new_Node;
}
bool chack_palindram(Node *head, Node *tail, int count)
{
    Node *h = head;
    Node *t = tail;
    if (h == NULL || h->next == NULL)
    {
        return true;
    }
    for (int i = 0; i < count / 2; i++)
    {
        if (h->val != t->val)
        {
            return false;
            break;
        }
        h = h->next;
        t = t->prev;
    }
}
int count_node(Node *head)
{
    Node *temp = head;
    int count = 0;
    while (temp != NULL)
    {
        count++;
        temp = temp->prev;
    }
    return count;
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
        inseart_tail(head, tail, val);
    }
    int count = count_node(tail);
    bool flag = chack_palindram(head, tail, count);
    if (flag)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    // cout << endl << count;
    return 0;
}
