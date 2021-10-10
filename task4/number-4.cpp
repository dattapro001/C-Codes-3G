#include <iostream>
using namespace std;
struct Node
{
    int data;
    Node* next;
};

Node* deleteNode( Node* head)
{
    if (head == NULL)
        return NULL;
    else if (head->next == NULL) {
        delete head;
        return NULL;
    }
    Node* again = head;
    while (again->next->next != NULL)
        again = again->next;
   delete(again->next);
    again->next = NULL;
    return head;
}
void remove_node(struct Node** head_new, int new_data)
{
    struct Node* new_node = new Node;
    new_node->data = new_data;
    new_node->next = (*head_new);
    (*head_new) = new_node;
}
int main()
{
     Node* head = NULL;
    remove_node(&head,10);
    remove_node(&head,25);
    remove_node(&head,18);
    remove_node(&head,37);
    remove_node(&head,32);
    remove_node(&head,43);
    remove_node(&head,18);
    remove_node(&head,6);
    remove_node(&head,51);
    remove_node(&head,44);

    head = deleteNode(head);
    for (Node*element = head; element!= NULL; element= element->next)
        cout <<element->data <<endl;
        return 0;
}
