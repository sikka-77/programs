#include <bits/stdc++.h>
using namespace std;

struct treeNode
{
    int data;
    treeNode *left;
    treeNode *right;
};

treeNode *makeNewNode(int value)
{
    treeNode *node = new treeNode();
    node->data = value;
    node->left = NULL;
    node->right = NULL;
    return node;
}

treeNode *insert(treeNode *root, int value)
{
    if (root == NULL)
    {
        root = makeNewNode(value);
    }
    else if (value > root->data)
    {
        root->right = insert(root->right, value);
    }
    else
    {
        root->left = insert(root->left, value);
    }
    return root;
}

int countNode(treeNode *root, int start, int end)
{
    int count = 0;
    stack<treeNode *> lis;
    lis.push(root);
    while (lis.empty() == false)
    {
        treeNode *node = lis.top();
        cout << " " << node->data << " ";
        lis.pop();
        if (node->data >= start && node->data <= end)
        {
            count++;
        }
        if (node->right)
        {
            lis.push(node->right);
        }
        if (node->left)
        {
            lis.push(node->left);
        }
    }
    return count;
}

int main()
{
    treeNode *root = NULL;
    root = insert(root, 10);
    root = insert(root, 5);
    root = insert(root, 50);
    root = insert(root, 1);
    root = insert(root, 40);
    root = insert(root, 100);
    int start, end;
    cout << "enter numbers for range : ";
    cin >> start >> end;
    int ans;
    ans = countNode(root, start, end);
    cout << ans;
}