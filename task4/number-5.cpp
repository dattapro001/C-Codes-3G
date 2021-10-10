#include <iostream>
using namespace std;
struct Node
 {
    int data;
    Node* next;
};
Node*delete_Node(Node* head)
{
    if (head == NULL)
        return NULL;
    Node* any = head;
    head = head->next;
    delete any;
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
     remove_node(&head,23);
     remove_node(&head,32);
     remove_node(&head,10);
     remove_node(&head,15);
     remove_node(&head,43);
     remove_node(&head,33);
     remove_node(&head,28);
     remove_node(&head,4);
     remove_node(&head,11);
     remove_node(&head,33);

    head =delete_Node(head);
    for (Node* element = head; element != NULL; element = element->next)
        cout << element->data <<endl;
    return 0;
}
