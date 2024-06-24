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
            head = NULL;
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
class Nodea{
    public:
        int val;
        Nodea *next;
        Nodea *prev;
        Nodea(int val)
        {
            this->prev = NULL;
            this->val = val;
            this->next = NULL;
        }
};
class my_queye{
    public:
        Node *head = NULL;
        Node *tail = NULL;
        int count = 0;
        void push(int val)
        {
            Node *new_Node = new Node(val);
            count++;
            if(head == NULL)
            {
                head = new_Node;
                tail = new_Node;
                return;
            }
            tail->next = new_Node;
            new_Node->prev = tail;
            tail = new_Node;
        }
        void pop()
        {
            Node *delete_Node = head;
            count--;
            head = head->next;
            delete delete_Node;
            if(head == NULL)
            {
                tail = NULL;
                return;
            }
            
            
                head->prev = NULL;
            
        }
        int fornt()
        {
            return head->val;
        }
        int sizes()
        {
            return count;
        }
        bool empty()
        {
            if(count == 0) return true;
            else return false;
        }
};
int main() 
{
    //Md. Nazmus Sakib
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    my_stack s;
    my_queye q;
    int n, m;
    cin >> n >> m;
    bool flag = true;
    if(n != m) flag = false;
    else
    {
        for(int i = 0; i < n; i++)
        {
            int val;
            cin >> val;
            s.push(val);
        }
        for(int i = 0; i < m; i++)
        {
            int val2;
            cin >> val2;
            q.push(val2);
        }
        while(!q.empty())
        {
            if(s.top() != q.fornt())
            {
                flag = false;
                break;
            }
            s.pop();
            q.pop();
        }
    }
    if(flag) cout << "YES";
    else cout << "NO"; 
    return 0;
}