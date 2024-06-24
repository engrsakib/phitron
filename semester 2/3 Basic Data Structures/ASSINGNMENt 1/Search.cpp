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
void find_x(Node *head, int x)
{
    Node *temp = head;
    int rank = 0;
    bool flag = false;
    while (temp != NULL)
    {
        if (temp->val == x)
        {
            flag = true;
            break;
        }
        temp = temp->next;
        rank++;
    }
    if(flag) cout << rank << endl;
    else cout << -1 << endl;
}
int main()
{
    // Md. Nazmus Sakib
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int t;
    cin >> t;
    while (t--)
    {
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
        int x;
        cin >> x;
        find_x(head, x);
    }
    return 0;
}
