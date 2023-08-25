#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
};

void add(Node **head_ref, int new_data)
{
    Node *new_node = new Node();
    new_node->data = new_data;
    new_node->next = *head_ref;
    *head_ref = new_node;
}

void reverse(Node *head, int new_data)
{
    Node *temp = head;
    Node *new_head = NULL;
    Node *next_temp = NULL;
    while (temp != NULL)
    {
        next_temp = temp->next;
        temp = next_temp;
    }
}

int main()
{
    Node *head = NULL;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int data;
        cin >> data;
        add(&head, data);
    }
    for (int i = 0; i < n; i++)
    {
        int data;
        reverse(head, data);
    }
    while (head != NULL)
    {
        cout << head->data << "\n";
        head = head->next;
    }
}