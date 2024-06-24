#include <bits/stdc++.h>

using namespace std;
class Node{
    public:
        int val;
        Node *left;
        Node *right;
        Node(int val)
        {
            this->val = val;
            this->left = NULL;
            this->right = NULL;
        }
};

void in_order(Node *root)
{
    queue <Node *> q;
    q.push(root);
    cout << "Left to Right" << endl;
    while(!q.empty())
    {
        Node *f = q.front();
        q.pop();

        cout << f->val << " ";
        //left to right
        if(f->left) q.push(f->left);
        if(f->right) q.push(f->right);
    }
}
void in_order2(Node *root)
{
    queue <Node *> q;
    q.push(root);
    cout << "Rigt to left" << endl;
    while(!q.empty())
    {
        Node *f = q.front();
        q.pop();

        cout << f->val << " ";
        //Right to Left
        if(f->right) q.push(f->right);
        if(f->left) q.push(f->left);
    }
}
int main() 
{
    //Md. Nazmus Sakib
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    //Node assign
    Node *root = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *c = new Node(40);
    Node *d = new Node(50);
    Node *e = new Node(60);
    Node *f = new Node(70);
    Node *g = new Node(80);
    Node *h = new Node(90);
    Node *i = new Node(100);
    //Node Cannection
    root->left = a;
    root->right = b;
    a->left = c;
    a->right = h;
    c->right = e;
    b->right = d;
    d->left = f;
    d->right = g;
    h->right = i;
    //left to right
    in_order(root);
    cout << endl;;
    //riht to left
    in_order2(root);
    return 0;
}