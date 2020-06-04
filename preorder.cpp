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
    treeNode *y = new treeNode();
    y->data = value;
    y->left = NULL;
    y->right = NULL;
    return y;
}

treeNode *insert(treeNode *root, int value)
{
    if (root == NULL)
    {
        root = makeNewNode(value);
    }
    else if (value > root->data)
    {
        root->right = makeNewNode(value);
    }
    else
    {
        root->left = makeNewNode(value);
    }
    return root;
}

void preOrder(treeNode *root)
{
    //int a[5];
    if (root == NULL)
    {
        cout << "tree empty";
    }
    stack<treeNode *> lis;
    lis.push(root);
    //int i = 0;
    while (lis.empty() == false)
    {
        treeNode *node = lis.top();
        cout << node->data;

        lis.pop();
        if (node->right)
        {
            lis.push(node->right);
        }
        if (node->left)
        {
            lis.push(node->left);
        }
    }
    /*for (int j = 0; j < 5; j++)
    {
        cout << a[i];
    }*/
}

int main()
{
    treeNode *root = NULL;
    root = makeNewNode(10);
    root->left = makeNewNode(8);
    root->right = makeNewNode(2);
    root->left->left = makeNewNode(3);
    root->left->right = makeNewNode(5);
    root->right->left = makeNewNode(2);
    preOrder(root);
}