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
int count_leef(Node *root)
{
    if(root == NULL) return 0;
    if(root->left == NULL && root->right == NULL)
    {
        return 1;
    }
    else
    {
        int l = count_leef(root->left);
        int r = count_leef(root->right);
        return l + r;
    }
}
int max_height(Node *root)
{
    if(root == NULL) return 0;
    int l = max_height(root->left);
    int r = max_height(root->right);
    return max(l , r) + 1;
}
int count(Node *root)
{
    if(root == NULL) return 0;
    int l = count(root->left);
    int r = count(root->right);
    return l + r + 1;
}
int main() 
{
    //Md. Nazmus Sakib
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    Node *root = input_Node();
    int cnt = count(root);
    cout << "COUNT: " << cnt;
    cout << endl << "Cout leef: " << count_leef(root);
    cout << endl << "Max Height: " << max_height(root);
    return 0;
}