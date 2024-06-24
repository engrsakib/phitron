#include <bits/stdc++.h>

using namespace std;
class Node
{
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
    if (val == -1)
        root = NULL;
    else
        root = new Node(val);

    queue<Node *> q;
    if (root)
        q.push(root);
    while (!q.empty())
    {
        Node *p = q.front();
        q.pop();

        int l, r;
        cin >> l >> r;
        Node *my_Left;
        Node *my_Right;
        if (l == -1)
            my_Left = NULL;
        else
            my_Left = new Node(l);
        if (r == -1)
            my_Right = NULL;
        else
            my_Right = new Node(r);

        // Cannection
        p->left = my_Left;
        p->right = my_Right;

        // Chield PUSH
        if (p->left)
            q.push(p->left);
        if (p->right)
            q.push(p->right);
    }
    return root;
}
void print_level(Node *root, int x)
{
    if (root == NULL)
        return;
    queue<Node *> q;
    q.push(root);
    int lev = 0;
    bool not_found = false;
    while (!q.empty())
    {
        int sz = q.size();
        for (int i = 1; i <= sz; i++)
        {
            Node *fr = q.front();
            q.pop();
            if (lev == x)
            {
                cout << fr->val << " ";
                not_found = true;
            }
            if (fr->left)
                q.push(fr->left);
            if (fr->right)
                q.push(fr->right);
        }
        if (lev == x)
            break;
        lev++;
    }
    if (not_found == false)
        cout << "Invalid" << endl;
}
int main()
{
    // Md. Nazmus Sakib
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    Node *root = input_Node();
    int x;
    cin >> x;
    print_level(root, x);
    return 0;
}
