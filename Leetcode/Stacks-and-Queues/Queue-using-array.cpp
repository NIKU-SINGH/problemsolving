#include <iostream>
using namespace std;

class Queue
{
private:
      int size;
      int front;
      int rear;
      int *Q;

public:
      void creation()
      {
            cout << "Enter the size of queue:\n";
            cin >> size;
            Q = new int[size];
            front = rear = 0;
      }
      void enqueue(int a)
      {
            if (rear == size - 1)
            {
                  cout << "Queue is full\n";
            }
            else
            {
                  rear++;
                  Q[rear] = a;
            }
      }
      int dequeue()
      {
            int x = -1;
            if (front > rear)
            {
                  cout << "Queue is empty\n";
            }
            else
            {
                  front++;
                  x = Q[front];
                  front++;
            }
            return x;
      }

      void Display()
      {
            for (int i = front; i <= rear; i++)
            {
                  cout << Q[i] << "\n";
            }
      }
};

int main()
{
      Queue queue;
      queue.creation();
      int num;
      do
      {
            cout << "Enter 1 for enqueue of array:\n";
            cout << "Enter 2 for dequeue of array:\n";
            cout << "Enter 3 for display of array:\n";
            cout << "Enter 4 for exit of array:\n";
            cin >> num;

            switch (num)
            {
            case 1:{
                  int c;
                  cout << "Enter the value:";
                  cin >> c;
                  queue.enqueue(c);
                  break;
                  }
            case 2:{
                  cout << "Deleted value is" << queue.dequeue() << "\n";
                  break;
                  }
            case 3:{
                  cout << "\n Displaying Queue now\n";
                  queue.Display();
                  break;
                  }
            }
      }while(num < 4);

      return 0;
}