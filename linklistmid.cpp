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
int findMid(linkNode *start, int n)
{
    linkNode *fast;
    linkNode *slow;
    fast = start;
    slow = start;

    while (fast != NULL && fast->next != NULL)
    {
        fast = fast->next->next;
        slow = slow->next;
    }
    if (n % 2 != 0)
    {
        return slow->data;
    }
    else
    {
        return slow->next->data;
    }
}
int findLen(linkNode *start)
{
    int n = 0;
    while (start->next != NULL)
    {
        start = start->next;
        n++;
    }
    return n + 1;
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
    display(start);
    int mid;
    int len;
    len = findLen(start);
    mid = findMid(start, len);
    cout << "midle elemnt is : " << mid << endl;
}