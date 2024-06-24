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
bool duplicate_value(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        Node *current = temp->next;
        while (current != NULL)
        {
            if (temp->val == current->val)
            {
                return true;
            }
            current = current->next;
        }
        temp = temp->next;
    }
    return false;
}
void insert_a_tell(Node *&head, int val)
{
    Node *new_Node = new Node(val);
    Node *temp = head;
    if (head == NULL)
    {
        head = new_Node;
        return;
    }
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = new_Node;
}
int main()
{
    // Md. Nazmus Sakib
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    Node *head = NULL;
    int val;

    while (true)
    {
        cin >> val;
        if (val == -1)
            break;
        insert_a_tell(head, val);
    }
    bool duplicate = duplicate_value(head);
    if (duplicate)
        cout << "YES";
    else
        cout << "NO";
    return 0;
}