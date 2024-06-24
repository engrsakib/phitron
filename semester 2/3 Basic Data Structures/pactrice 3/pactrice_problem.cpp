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
void count_link_list(Node *head)
{
    int cnt = 0;
    Node *current = head;
    while (current != NULL)
    {
        cnt++;
        current = current->next;
    }
    cout << cnt;
}
// void print_linked_list(Node *head)
// {
//     Node *tmp = head;
//     while(tmp != NULL)
//     {
//         cout << tmp->val << " ";
//         tmp = tmp->next;
//     }
//     cout << endl << endl;
// }
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
    count_link_list(head);
    // print_linked_list(head);
    return 0;
}