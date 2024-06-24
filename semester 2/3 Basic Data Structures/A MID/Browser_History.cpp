#include <bits/stdc++.h>

using namespace std;
class Node
{
public:
    string val;
    Node *next;
    Node *prev;
    Node(string val)
    {
        this->prev = NULL;
        this->val = val;
        this->next = NULL;
    }
};
void insret_web(Node *&head, Node *&tail, string web)
{
    Node *new_Node = new Node(web);
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
void handle_Node(Node *head)
{
    string comd, add;
    Node *curr = head;
    while (cin >> comd)
    {
        if (comd == "visit")
        {
            Node *temp = head;
            cin >> add;
            bool flag = false;
            while (temp != NULL)
            {
                if (temp->val == add)
                {
                    flag = true;
                    break;
                }
                temp = temp->next;
            }
            if (flag)
            {
                curr = temp;
                cout << curr->val << endl;
            }
            else
            {
                cout << "Not Available" << endl;
            }
        }
        else if (comd == "next")
        {
            if (curr->next != NULL)
            {
                curr = curr->next;
                cout << curr->val << endl;
            }
            else
            {
                cout << "Not Available" << endl;
            }
        }
        else if (comd == "prev")
        {
            if (curr->prev != NULL)
            {
                curr = curr->prev;
                cout << curr->val << endl;
            }
            else
            {
                cout << "Not Available" << endl;
            }
        }
    }
}
int main()
{
    // Md. Nazmus Sakib
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    Node *head = NULL;
    Node *tail = NULL;
    while (true)
    {
        string web;
        cin >> web;
        if (web == "end")
            break;
        insret_web(head, tail, web);
    }
    handle_Node(head);
    return 0;
}
