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
int find_max(Node *head)
{
    Node *temp = head;
    int max = INT_MIN;
    while (temp != NULL)
    {
        if (max < temp->val)
            max = temp->val;
        temp = temp->next;
    }
    return max;
}
int find_min(Node *head)
{
    Node *temp = head;
    int min = INT_MAX;
    while (temp != NULL)
    {
        if (min > temp->val)
            min = temp->val;
        temp = temp->next;
    }
    return min;
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
            insert_node(head, tail, val);
    }
    int max = find_max(head);
    int min = find_min(head);

    cout << max - min;
    return 0;
}
