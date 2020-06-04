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

void removeDuplicate(linkNode *start)
{
    linkNode *temp = start;
    while (temp->next != NULL)
    {
        if (temp->next->data == temp->data)
        {
            linkNode *y;
            y = temp->next;
            temp->next = y->next;
            y->next = NULL;
            free(y);
        }
        else
        {
            temp = temp->next;
        }
    }
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
int main()
{
    linkNode *start = NULL;
    start = insertBegin(start, 7);
    insertLast(start, 7);
    insertLast(start, 7);

    insertLast(start, 8);
    insertLast(start, 9);
    insertLast(start, 9);
    display(start);
    removeDuplicate(start);
    cout << "\n";
    display(start);
}