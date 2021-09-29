#include <iostream>
using namespace std;

struct Node
{
      int value;
      struct Node *next;
};

Node *Top = NULL;

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
      if (Top == NULL)
      {
            cout << "No display possible\n";
      }
      else
      {
            Node *temp = Top;
            while (temp != NULL)
            {
                  cout << temp->value << "\n";
                  temp = temp->next;
            }
      }
}

int main()
{
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
                        push();
                        break;
                  }
                  case 2:
                  {
                        pop();
                        break;
                  }
                  case 3:
                  {
                        cout<<"\n Displaying stack now\n";
                        display();
                        break;
                  }
            }
      }while (num <= 4);
      
}