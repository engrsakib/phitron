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
Node *input_Node()
{
    int val;
    cin >> val;
    Node *root;
    if(val == -1) root = NULL;
    else root = new Node(val);

    queue <Node *> q;
    if(root) q.push(root);
    while(!q.empty())
    {
        Node *p = q.front();
        q.pop();
        //Kaj Jeta amora korbo
        int l, r;
        cin >> l >> r;
        Node *my_Left;
        Node *my_Right;
        if(l == -1) my_Left = NULL;
        else my_Left = new Node(l);
        if(r == -1) my_Right = NULL;
        else my_Right = new Node(r);

        // Cannection
        p->left = my_Left;
        p->right = my_Right;

        //Chield PUSH
        if(p->left) q.push(p->left);
        if(p->right) q.push(p->right);
    }
    return root;
}
void level_order(Node *root)
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
void insert_bst(Node *&root, int x)
{
    Node *new_Node = new Node(x);
    if(root == NULL)
    {
        root = new_Node;
        return;
    }
    if( x < root->val)
    {
        if(root->left == NULL)
        {
            root->left = new_Node;
        }
        else
        {
            insert_bst(root->left, x);
        }
    }
    else
    {
        if(root->right == NULL)
        {
            root->right = new_Node;
        }
        else
        {
            insert_bst(root->right, x);
        }
    }
}
int main() 
{
    //Md. Nazmus Sakib
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    Node *root = input_Node();
    insert_bst(root, 13);
    insert_bst(root, 10);
    insert_bst(root, 101);
    insert_bst(root, 104);
    insert_bst(root, 105);
    insert_bst(root, 0);
    level_order(root);
    return 0;
}