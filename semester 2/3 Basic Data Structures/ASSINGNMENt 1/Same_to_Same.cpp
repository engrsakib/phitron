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
void insert_node(Node *&head, Node *&tail, int val)
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
int count_node(Node *head)
{
    int cnt = 0;
    Node *temp = head;
    while (temp != NULL)
    {
        cnt++;
        temp = temp->next;
    }
    return cnt;
}
void cheack_same_to_same(Node *head, Node *head1)
{
    Node *temp = head;
    Node *temp1 = head1;
    bool flag = false;
    while (temp != NULL && temp1 != NULL)
    {
        if (temp->val == temp1->val)
        {
            flag = true;
        }
        else
        {
            flag = false;
            break;
        }
        temp = temp->next;
        temp1 = temp1->next;
    }
    if (flag)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}
int main()
{
    // Md. Nazmus Sakib
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    Node *head = NULL;
    Node *head1 = NULL;
    Node *tail = NULL;
    Node *tail1 = NULL;
    int val, val1;
    while (true)
    {
        cin >> val;
        if(val == -1)
            break;
        else
            insert_node(head, tail, val);
    }
    while (true)
    {
        cin >> val1;
        if (val1 == -1)
            break;
        else
            insert_node(head1, tail1, val1);
    }
    int a = count_node(head);
    int b = count_node(head1);

    if (a != b)
        cout << "NO" << endl;
    else
        cheack_same_to_same(head, head1);
    // cout << a << " " << b;
    return 0;
}
