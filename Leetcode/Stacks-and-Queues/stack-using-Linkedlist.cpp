#include <iostream>
using namespace std;

struct Node
{
      int value;
      struct Node *next;
};
class Stack
{
private:
      Node *Top = NULL;

public:
      void push()
      {
            Node *nptr = new Node;

            if (nptr == NULL)
            {
                  cout << "Stack Overflow";
            }
            else
            {
                  cout << "Enter the value:";
                  cin >> nptr->value;
                  nptr->next = Top;
                  Top = nptr;
            }
      }

      int pop()
      {
            int x = -1;
            if (Top == NULL)
            {
                  cout << "Stack Underflow\n";
            }
            else
            {
                  Node *temp = Top;
                  Top = Top->next;
                  x = temp->value;
                  delete (temp);
            }
            return x;
      }

      void display()
      {
                  Node *temp = Top;
                  while (temp != NULL)
                  {
                        cout << temp->value << "\n";
                        temp = temp->next;
                  }
      }
};

int main()
{
      Stack st;
      int num;
      do
      {
            cout << "Enter 1 for Push:\n";
            cout << "Enter 2 for Pop:\n";
            cout << "Enter 3 for Display:\n";
            cout << "Enter 4 for Exit:\n";
            cin >> num;
            switch (num)
            {
            case 1:
            {
                  st.push();
                  break;
            }
            case 2:
            {
                  cout<<st.pop()<<"\n";
                  break;
            }
            case 3:
            {
                  cout << "\n Displaying stack now\n";
                  st.display();
                  break;
            }
            }
      } while (num <= 4);
}