#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int n)
    {
        data = n;
        next = NULL;
    }
};

Node *makeLL()
{
    int data;
    cin >> data;

    Node *h = NULL;
    Node *temp = NULL;

    while (data != -1)
    {
        Node *newNode = new Node(data);

        if (h == NULL)
        {
            h = newNode;
            temp = h;
        }
        else
        {
            temp->next = newNode;
            temp = newNode;
        }

        cin >> data;
    }
}

void display(Node *head)
{
    Node *t = head;

    while (t != NULL)
    {
        cout << t->data << endl;
        t = t->next;
    }
    return;
}

int main()
{
    Node *head = makeLL();

    display(head);

    return 0;
}