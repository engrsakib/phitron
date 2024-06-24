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
void print_left(Node *root)
{
    if(root == NULL) return;
    if(root->left != NULL) print_left(root->left);
    else print_left(root->right);
    cout << root->val << " ";
}
void print_right(Node *root)
{
    if(root == NULL) return;
    cout << root->val << " ";
    if(root->right != NULL) print_right(root->right);
    else print_right(root->left);
}
int main() 
{
    //Md. Nazmus Sakib
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    Node *root = input_Node();
    if(root->left != NULL) print_left(root->left);
    cout << root->val << " ";
    if(root->right != NULL) print_right(root->right);
    return 0;
}
