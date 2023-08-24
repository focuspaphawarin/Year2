#include<iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
};

void push (Node**head_ref,int new_data)
{
    Node* new_node = new Node;
    new_node -> data = new_data;
    new_node -> next = *head_ref;
    *head_ref = new_node;
}
int main()
{
    Node *head = NULL;
    push(&head, 1);
    push(&head, 2);
    push(&head, 3);
    while(head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
}