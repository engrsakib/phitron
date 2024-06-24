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
void insert_linked_list(Node *&head, Node *&tail, int val)
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
        //cout << temp->val << " ";
        cnt++;
        temp = temp->next;
    }
    return cnt;
}
int main()
{
    // Md. Nazmus Sakib
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    Node *head = NULL;
    Node *tail = NULL;
    Node *head1 = NULL;
    Node *tail1 = NULL;
    int val;
    while (true)
    {
        cin >> val;
        if (val == -1)
            break;
        insert_linked_list(head, tail, val);
    }

    int val2;
    while (true)
    {
        cin >> val2;
        if (val2 == -1)
            break;
        insert_linked_list(head1, tail1, val2);
    }
    int a = count_node(head);
    int b = count_node(head1);
    if(a != b)
    {
        cout << "FALSE";
    }
    else cout << "TRUE";
    
    return 0;
}
