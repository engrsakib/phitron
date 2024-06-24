#include <bits/stdc++.h>

using namespace std;
class Node{
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
void print_Left(Node* head) {
    cout << "L -> ";
    while (head != NULL) {
        cout << head->val << " ";
        head = head->next;
    }
    cout << endl;
}

void print_Right(Node* tail) {
    cout << "R -> ";
    while (tail != NULL) {
        cout << tail->val << " ";
        tail = tail->prev;
    }
    cout << endl;
}
void insert_head(Node *&head, Node *&tail, int value)
{
    Node *new_Node = new Node(value);
    if(head == NULL)
    {
        head = new_Node;
        tail = new_Node;
        return;
    }
    new_Node->next = head;
    head->prev = new_Node;
    head = new_Node;

}
int size_node(Node *head)
{
    Node *temp = head;
    int count = 0;
    while(temp != NULL)
    {
        count++;
        temp = temp->next;
    }
    return count;
}
void print_left(Node *head)
{
    Node *temp = head;
    while(temp != NULL)
    {
        cout << "L ->" << temp->val << " ";
        temp = temp->next;
    }
}
int main() 
{
    //Md. Nazmus Sakib
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
Node *head = NULL;
Node *tail = NULL;
int q;
cin >> q;
while(q--)
{
 int index, value;
 cin >> index >> value;
 if(index = 0)
 {
    insert_head(head, tail, value);
 }
 print_Left(head);
 print_Right(tail);
}
    return 0;
}
