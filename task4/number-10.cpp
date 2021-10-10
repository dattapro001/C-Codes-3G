#include<bits/stdc++.h>
using namespace std;

struct Node
{
     int data;
     Node *prev;
     Node *next;
};
Node *wave;
Node *java;
Node *fact;


void create_doubly_linkedlist();
void display();
int search_item();

int main()
{
     create_doubly_linkedlist();
     display();
     int x = search_item();
     if(x==1)
     {
          cout<<"\n Item not found in list."<<endl;
     }
     else
     {
           cout<<"\nitem not found in list."<<endl;
     }
     return 0;
}
void create_doubly_linkedlist()
{
     int n, i;
     cout<<"\nEnter any number: ";
     cin>>n;
     for(i=1; i<=n; i++)
     {
           java = new Node;
           cin>>java->data;
           java->next =java->prev = NULL;
           if(i==1)
           {
                wave=java;
           }
           else
           {
                fact->next=java;
                java->prev= fact;
           }
           fact=java;
     }
}
void display()
{
     java=wave;
     while(java !=NULL)
     {
            cout<<java->data<<" ";
            java=java->next;
     }
}
int search_item()
{
     cout<<"\nEnter the number :"<<endl;
     int n , c=0;
     cin>>n;
     java=wave;
     while(java !=NULL)
     {
            if(java->data==n)
            {
                 c++;
                 return c;
            }
            java=java->next;
     }
}
