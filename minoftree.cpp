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

int findMin(treeNode *root)
{
    int number;
    if (root == NULL)
    {
        return -1;
    }
    else
    {

        while (root != NULL)
        {
            number = root->data;
            root = root->left;
        }
    }
    return number;
}
int main()
{
    treeNode *root = NULL;
    root = insert(root, 10);
    root = insert(root, 15);
    root = insert(root, 8);
    root = insert(root, 2);
    int min;
    min = findMin(root);
    cout << "min of tree is : " << min;
}