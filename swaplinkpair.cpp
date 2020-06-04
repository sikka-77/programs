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
void swap(int *a, int *b)
{
    int c;
    c = *a;
    *a = *b;
    *b = c;
}
void swapPairs(linkNode *start)
{
    linkNode *temp;
    while (start != NULL && start->next != NULL)
    {

        temp = start;
        // cout << "\n"
        //    << temp->data << temp->next->data << "\n";
        /* int xtra;
        xtra = temp->data;
        temp->data = temp->next->data;
        temp->next->data = xtra;*/
        swap(temp->data, temp->next->data);
        //cout << "\n"
        //   << temp->data << temp->next->data << "\n";
        start = start->next->next;
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
    insertLast(start, 9);
    insertLast(start, 10);
    insertBetween(start, 8, 9);
    insertLast(start, 11);
    insertLast(start, 12);
    display(start);
    swapPairs(start);
    cout << "\n";
    display(start);
}