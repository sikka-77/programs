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
void checkPalin(linkNode *start)
{
    stack<int> s;
    linkNode *temp;
    temp = start;
    while (start->next != NULL)
    {
        s.push(start->data);
        start = start->next;
    }
    s.push(start->data);
    //cout << temp->data;
    int check;
    int flag = 0;
    while (temp->next != NULL)
    {
        check = s.top();
        s.pop();
        if (check != temp->data)
        {
            flag = 1;
            break;
        }
        temp = temp->next;
    }
    if (temp->data == s.top() && flag == 0)
        cout << "yes";
    else
    {
        cout << "no";
    }
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
int main()
{
    linkNode *start = NULL;
    start = insertBegin(start, 7);
    insertLast(start, 8);
    insertLast(start, 9);
    // insertBetween(start, 8, 9);
    insertLast(start, 8);
    insertLast(start, 7);
    display(start);
    checkPalin(start);
}