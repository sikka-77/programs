#include <bits/stdc++.h>
using namespace std;

struct StackNode
{
    int data;
    StackNode *next;

    StackNode(int x)
    {
        data = x;
        next = NULL;
    }
};

struct MyStack
{
    StackNode *top;
    MyStack()
    {
        top = NULL;
    }
    void push(int a);
    int pop();
};

void MyStack ::push(int a)
{
    StackNode *temp = new StackNode(a);
    temp->next = top;
    top = temp;
}
int MyStack ::pop()
{
    int res;
    if (top == NULL)
    {
        return -1;
    }

    else
    {
        StackNode *temp;
        temp = top;
        res = temp->data;
        top = top->next;
        free(temp);
        return res;
    }
}

int main()
{
    MyStack *y = new MyStack();
    y->push(10);
    y->push(20);
    int ele = y->pop();
    cout << ele << endl;
}