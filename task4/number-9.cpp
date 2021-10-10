#include <bits/stdc++.h>

using namespace std;

struct double_list
 {
    int data;
    struct double_list* next;
    struct double_list* prev;
};
void removenode(struct double_list** head_any, struct double_list*rem)
{
    if (*head_any == NULL || rem == NULL)
        return;
    else if (*head_any == rem)
        *head_any = rem->next;
    else if (rem->next != NULL)
        rem->next->prev = rem->prev;
    if (rem->prev != NULL)
        rem->prev->next = rem->next;
    free(rem);
}

void removeatposition(struct double_list** head_any, int n)
{

    if (*head_any == NULL || n <= 0)
        return;
    struct double_list* current = *head_any;
    int i;
    for (int i = 1; current != NULL && i < n; i++)
        current = current->next;
    if (current == NULL)
        return;

    removenode(head_any, current);
}
void wave(struct double_list** head_any, int new_data)
{
    struct double_list* new_node =
         (struct double_list*)malloc(sizeof(struct double_list));

    new_node->data = new_data;
    new_node->prev = NULL;
    new_node->next = (*head_any);
    if ((*head_any) != NULL)
        (*head_any)->prev = new_node;

    (*head_any) = new_node;
}
void display(struct double_list* head)
{
    while (head != NULL) {
        cout << head->data << " ";
        head = head->next;
    }
}
int main()
{
    struct double_list* head = NULL;

    wave(&head, 10);
    wave(&head, 23);
    wave(&head, 21);
    wave(&head, 33);
    wave(&head, 15);
    wave(&head, 17);
    wave(&head, 33);
    wave(&head, 34);
    wave(&head, 54);
    wave(&head, 27);

    cout << "list before remove:";
    display(head);
    int n = 2;
    removeatposition(&head, n);
    cout << "\nlist after remove:";
    display(head);

    return 0;
}
