#include <iostream>
using namespace std;
struct Node
{
 int data;
 Node *next;
};
Node *head=NULL;
void beginning (int d)
{
 Node *beg = new Node();
 beg->data=d;
 beg->next=head;
 head=beg;
}
void display()
{
 Node *new_node=head;
 while(new_node!=NULL)
 {
  cout<<new_node->data<<" ";
  new_node=new_node->next;
 }
 cout<<"\n";
}
int main()
{
 beginning(21);
 beginning(33);
 beginning(12);
 beginning(16);
 beginning(13);
 beginning(17);
 beginning(14);

 display();
 return 0;
}
