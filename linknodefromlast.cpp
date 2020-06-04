#include <bits/stdc++.h>
using namespace std;

struct linkNode
{
    int data;
    linkNode *next;
};

void *insertLast(linkNode *start, int value)
{

    linkNode *y = new linkNode();
    y->data = value;
    y->next = NULL;
    while (start->next != NULL)
        start = start->next;
    start->next = y;
}

linkNode *insertBegin(linkNode *start, int value)
{
    linkNode *y = new linkNode();
    y->data = value;

    if (start == NULL)
    {
        y->next = NULL;
    }
    else
    {
        y->next = start;
    }
    start = y;
    return start;
}

void insertBetween(linkNode *start, int value, int node)
{
    linkNode *y = new linkNode();
    y->data = value;
    while (start->next->data != node)
    {
        start = start->next;
    }
    y->next = start->next;
    start->next = y;
}
void display(linkNode *start)
{
    while (start->next != NULL)
    {
        cout << " " << start->data << " ";
        start = start->next;
    }
    cout << start->data;
}
int nFromLast(linkNode *start, int n)
{
    while (start->next != NULL)
    {
        linkNode *temp = start;
        linkNode *new_node = temp;
        for (int i = 1; i <= n - 1; i++)
        {
            temp = temp->next;
        }
        if (temp->next == NULL)
        {
            return new_node->data;
        }
        else
        {
            start = start->next;
        }
    }
}
int main()
{
    linkNode *start = NULL;
    int n;
    start = insertBegin(start, 7);
    insertLast(start, 9);
    insertLast(start, 10);
    insertBetween(start, 8, 9);
    insertLast(start, 11);
    display(start);
    cout << "enter value of n : ";
    cin >> n;
    int node;
    node = nFromLast(start, n);
    cout << "value is : " << node;
}