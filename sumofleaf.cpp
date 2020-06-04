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

void sumOfLeaf(treeNode *root)
{
    stack<treeNode *> lis;
    lis.push(root);
    int sum = 0;

    while (lis.empty() == false)
    {
        treeNode *node = lis.top();
        lis.pop();

        if (node->right)
        {
            lis.push(node->right);
        }
        if (node->left)
        {
            lis.push(node->left);
        }
        else
        {

            // cout << " hi " << node->data;
            sum = sum + node->data;
        }
    }
    cout << "sum is " << sum;
}
int main()
{
    treeNode *root = NULL;
    root = makeNewNode(67);
    root->left = makeNewNode(34);
    root->right = makeNewNode(82);
    root->left->left = makeNewNode(12);
    root->left->right = makeNewNode(45);
    root->right->left = makeNewNode(78);
    sumOfLeaf(root);
}