

#include<bits/stdc++.h>
using namespace std;


struct Node
{
     int data;
     Node *next;
};

Node *H, *T, *S;

void create_doubly_linkedlist();
void display();
void even_element_count();
int main()
{
     create_doubly_linkedlist();
     display();
     even_element_count();
     return 0;
}
void create_doubly_linkedlist()
{
     int n, i;
     cout<<"Enter the integar value : ";
     cin>>n;
     for(i=1; i<=n; i++)
     {
           T = new Node;
           cin>>T->data;
           T->next  = NULL;
           if(i==1)
           {
                H=T;
           }
           else
           {
                S->next=T;
           }
           S =T;
     }
}
void display()
{
     T=H;
     while(T !=NULL)
     {
            cout<<T->data<<" ";
            T=T->next;
     }
}
void even_element_count()
{
     T=H;
     int c=0;
     while(T !=NULL)
     {
          if(T->data%2==0)
          {
               c++;
          }
          T =T->next;
     }
     cout<<"\n\nTotal even number : "<<c<<endl;
}
