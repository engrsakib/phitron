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
class my_stack
{
    public:
    Node *head = NULL;
    Node *tail = NULL;
    int sizes = 0;
    void push(int val)
    {
        Node *new_Node = new Node(val);
        sizes++;
        if(head == NULL)
        {
            head = tail = new_Node;
            return;
        }
        tail->next = new_Node;
        new_Node->prev = tail;
        tail = tail->next;
    }
    void pop()
    {
        sizes--;
        Node *delete_Noed = tail;
        tail = tail->prev;
        if(tail == NULL)
        {
            head == NULL;
        }
        else
        {
            tail->next = NULL;
        }
        delete delete_Noed;
    }
    int top()
    {
        return tail->val;
    }
    int size()
    {
        return sizes;
    }
    bool empty()
    {
        if(sizes != 0) return false;
        else return true;
    }
};
int main() 
{
    //Md. Nazmus Sakib
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    my_stack sa;
    my_stack sa1;
    int n;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        int val;
        cin >> val;
        sa.push(val);
    }
    int m;
    cin >> m;
    for(int i = 0; i < m; i++)
    {
        int val1;
        cin >> val1;
        sa1.push(val1);
    }
    bool flag = true;
    if(sa.size() != sa1.size()) flag = false;
    else
    {
        while(!sa.empty())
        {
            if(sa.top() != sa1.top()) 
            {
                flag = false;
                break;
            }
            sa.pop();
            sa1.pop(); 
        }
    }
    if(flag) cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
}
