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
void max_and_min_checking();
int main()
{
     create_doubly_linkedlist();
     display();
     max_and_min_checking();
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

void max_and_min_checking()
{
      T=H;
      int maxi= T->data;
      int mini= T->data;
      while(T!=NULL)
      {
           if(maxi< T->data)
           {
                maxi=T->data;
           }
           if(mini> T->data)
           {
               mini=T->data;
           }
          T=T->next;
      }

      cout<<"\n\nMaximum Value : "<<maxi<<endl;
      cout<<"\nMinimum Value : "<<mini<<endl;
      cout<<"\nDifference between maximum and minimum value : "<<maxi-mini<<endl;
}
