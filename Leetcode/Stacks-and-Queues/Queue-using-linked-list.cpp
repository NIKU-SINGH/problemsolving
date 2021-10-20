#include<iostream>
using namespace std;

struct Node
{
      int data;
      Node *next;
};
class Queue
{
      private:
      int data;
      Queue *next;
      Queue *front = NULL,*rear = NULL;
      public:
      void enqueue(int x)
      {
            Queue *nptr = new Queue;
            if(nptr == NULL)
            {
                  cout<<"Queue is full\n";
            }
            else
            {
                  nptr->data = x;
                  nptr->next = NULL;
                  if(front == NULL)
                  front = rear = nptr;
                  else
                  {
                        rear->next = nptr;
                        rear = nptr;
                  }
            }
      }
      int dequeue()
      {
            int x = -1;
            Queue *nptr;
            if(front == NULL)
            {
                  cout<<"Queue is empty:\n";
            }
            else
            {
                  x = front->data;
                  nptr = front;
                  front = front->next;
                  free(nptr);
            }
            return x;
      }
      void display()
      {
            Queue *nptr = front;
            while(nptr)
            {
                  cout<<nptr->data<<" ";
                  nptr = nptr->next;
            }
            cout<<"\n";
      }

};

int main()
{
     Queue q;
      int num;
      do
      {
            cout << "Enter 1 for Enqueue:\n";
            cout << "Enter 2 for Dequeue:\n";
            cout << "Enter 3 for Display:\n";
            cout << "Enter 4 for Exit:\n";
            cin >> num;
            switch (num)
            {
                  case 1:
                  {
                        int x;
                        cout<<"\nEnter the no to Enqueue:";
                        cin>>x;
                        q.enqueue(x);
                        break;
                  }
                  case 2:
                  {
                        cout<<q.dequeue()<<"\n";
                        break;
                  }
                  case 3:
                  {
                        cout << "\n Displaying stack now\n";
                        q.display();
                        break;
                  }
            }
      } while (num <= 4); 
}