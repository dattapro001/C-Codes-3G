#include <iostream>
using namespace std;
struct double_list
{
    int n;
   double_list * next;
   double_list * prev;
};
class doublelist
 {
  private:
    double_list* head;
  public:
  doublelist()
  {
      head = NULL;
    }
    void push_back(int new_element)
    {
     double_list * new_node = new double_list();
      new_node->n = new_element;
      new_node->next = NULL;
      new_node->prev = NULL;
      if(head == NULL) {
        head = new_node;
      } else {
        double_list*wave = head;
        while(wave->next != NULL)
          wave = wave->next;
        wave->next = new_node;
        new_node->prev =wave;
      }
    }
    void programe(int newElement, int position)
    {
     double_list * new_node = new double_list ();
      new_node->n = newElement;
      new_node->next = NULL;
      new_node->prev = NULL;
      if(position < 1) {
        cout<<"\nposition should be >= 1.";
      } else if (position == 1) {
        new_node->next = head;
        head->prev = new_node;
        head = new_node;
      } else {
      double_list*wave = head;
        for(int i = 1; i < position-1; i++) {
          if(wave != NULL) {
            wave = wave->next;
          }
        }
        if(wave != NULL) {
          new_node->next = wave->next;
          new_node->prev = wave;
          wave->next = new_node;
          if(new_node->next != NULL)
            new_node->next->prev = new_node;
        } else {
          cout<<"\nThe last node is empty";
        }
      }
    }
    void element()
    {
     double_list * wave = head;
      if(wave != NULL) {
        cout<<"\nThe list is: ";
        while(wave != NULL) {
          cout<<wave->n<<" ";
          wave= wave->next;
        }
      } else {
        cout<<"\nThe list is empty.";
      }
    }
};

int main()
{
  doublelist any;
  any.push_back(35);
  any.push_back(22);
  any.push_back(11);
  any.push_back(23);
  any.push_back(7);
  any.element();
  any.programe(77, 72);
  any.element();
  any.programe(33, 3);
  any.element();

  return 0;
}
