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

bool search(treeNode *root, int value)
{
    if (root == NULL)
        return false;
    else if (root->data == value)
        return true;
    else if (value < root->data)
        return search(root->left, value);
    else
        return search(root->right, value);
}

treeNode *insert(treeNode *root, int value)
{
    if (root == NULL)
    {
        root = makeNewNode(value);
    }
    else if (value <= root->data)
    {
        root->left = insert(root->left, value);
    }
    else
    {
        root->right = insert(root->right, value);
    }

    return root;
}
int main()
{
    treeNode *root = NULL;
    root = insert(root, 10);
    root = insert(root, 8);
    root = insert(root, 15);
    root = insert(root, 2);
    root = insert(root, 20);
    int s;
    cout << "enter value to search : ";
    cin >> s;
    cout << search(root, s);
}