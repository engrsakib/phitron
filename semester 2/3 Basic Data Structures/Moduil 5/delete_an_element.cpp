#include <bits/stdc++.h>

using namespace std;
class Node{
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
    if(head == NULL)
    {
        head = new_Node;
        cout << endl << endl << "Insertet at Head" << endl << endl;
        return;
    }
    while(temp->next != NULL)
    {
        temp = temp->next;

    }
    temp->next = new_Node;
    cout << endl << endl << "Insertet at Tail" << endl << endl;
}
void print_linked_list(Node *head)
{
    cout << endl << endl << "Your Elemen are: ";
    Node *tmp = head;
    while(tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl << endl;
}
void insert_a_value_pos(Node *head, int pos, int v)
{
    Node *new_Node = new Node(v);
    Node *temp = head;
    for(int i = 0; i <= pos - 1; i++)
    {
        temp = temp->next;
    }
    new_Node->next = temp->next;
    temp->next = new_Node;

    cout << endl << endl << "Position succesfullay adeed" << endl << endl;
}
void insert_head(Node *&head, int v)
{
    Node *new_Node = new Node(v);
    new_Node->next = head;
    head = new_Node;

    cout << endl << endl << "Successfully Added Value in Head" << endl << endl; 
}
void delete_an_element(Node *head, int pos)
{
    Node *temp = head;
    for(int i = 1; i <= pos - 1; i++)
    {
        temp = temp->next;
    }
    Node *delete_node = temp->next;
    temp->next = temp->next->next;
    delete delete_node;
}
void delete_head(Node *&head)
{
    Node *delete_Node = head;
    head = head->next;
    delete delete_Node;
}
int main() 
{
    //Md. Nazmus Sakib
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    Node *head = NULL;
    cout << "Insert a Opption: " << endl;
    cout << endl;
     
    while(true)
    {
    int op;
    cout << "1 Insert a element: " << endl;
    cout << "2 print:" << endl;
    cout << "3 Insert any Possition" << endl;
    cout << "4 Insert any at head" << endl;
    cout << "5 Delete an Element" << endl;
    cout << "6 Delete an Element" << endl;
    cout << "7 Tirmninate:" << endl;
    cin >> op;
    if(op == 1)
    {
        cout << "Inster a Value: ";
        int v;
        cin >> v;
        insert_a_tell(head, v);
    }
    else if(op == 2)
    {
        print_linked_list(head);    
    }
    else if(op == 3)
    {
        int v, pos;
        cout << "enter a Possitio: ";
        cin >> pos;
        cout << "Enter a Value: ";
        cin >> v;
        if(pos == 0)
        {
            insert_head(head, pos);
        }
        else
        {
            insert_a_value_pos(head, pos, v);
        }
    }
    else if(op == 4)
    {
        int v;
        cout << "Please Insert a Value: \n";
        cin >> v;
        insert_head(head, v);
    }
    else if(op == 5)
    {
        int pos;
        cin >> pos;
        if(pos == 0)
        {
            delete_head(head);
        }
        else
        {
            delete_an_element(head, pos);
        }
    }
    else if(op == 6)
    {
        delete_head(head);
    }
    else
    {
        return 0;
    }
    }
    
    return 0;
}
