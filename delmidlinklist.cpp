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
int find(linkNode *start)
{
    //cout << "hi";
    int len = 0;
    while (start->next != NULL)
    {
        start = start->next;
        len++;
    }
    return len + 1;
}
void delMid(linkNode *start)
{
    int len = 0;
    linkNode *y;
    cout << "hi";
    while (start->next != NULL)
    {
        start = start->next;
        len++;
    }
    int n;
    n = len + 1;
    if (n % 2 == 0)
    {
        //int c=0;
        int c = 1; //to make start and c equal and to stop start one before the elemnt to delete
        while (start->next != NULL)
        //while (c != n % 2)
        {
            start = start->next;
            c = c + 1;
            if (c == n % 2)
                break;
        }

        y = start->next;
        cout << " byee ";
        start->next = y->next;
        y->next = NULL;
        free(y);
    }
    /* else
    {
    }*/
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
    int len;
    start = insertBegin(start, 7);
    insertLast(start, 9);
    insertLast(start, 10);
    insertBetween(start, 8, 9);
    insertLast(start, 11);
    insertLast(start, 12);
    display(start);
    len = find(start);
    cout << "length is : " << len;
    //display(start);
    //cout << start->data;
    delMid(start);
    display(start);
    cout << "complete";
}