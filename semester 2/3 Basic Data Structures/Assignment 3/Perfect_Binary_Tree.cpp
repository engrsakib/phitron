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
int count_Node(Node *root)
{
    if(root == NULL) return 0;
    int l = count_Node(root->left);
    int r = count_Node(root->right);

    return l + r + 1;
}
int count_depth(Node *root)
{
    if(root == NULL) return 0;
    int l = count_depth(root->left);
    int r = count_depth(root->right);
    return max(l, r) + 1;

}
int main() 
{
    //Md. Nazmus Sakib
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    Node *root = input_Node();
    int count = count_Node(root);
    int depth = count_depth(root);
    //cout << count << " " << depth;
    if(count != pow(2, depth) - 1) cout << "NO" << endl;
    else cout << "YES";
    return 0;
}
