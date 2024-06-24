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
Node *convert(int arr[], int n, int l, int r)
{
    if(l > r) return NULL;
    int mid = (l + r) / 2;
    Node *root = new Node(arr[mid]);
    Node *lefta = convert(arr, n, l, mid - 1);
    Node *righta = convert(arr, n, mid + 1, r);
    root->left = lefta;
    root->right = righta;
    return root;
}
int main() 
{
    //Md. Nazmus Sakib
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + n);
    Node *root = convert(arr, n, 0, n - 1);
    level_order(root);
    return 0;
}
