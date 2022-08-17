#include<bits/stdc++.h>
using namespace std;

struct Node{
    int value;
    Node *next;
    Node *prev;
};

class LinkedList
{
    Node *head = NULL;
    Node *tail = NULL;

    public:
    void insertAtTail(int value){
        Node *nptr = new Node;
         if(tail == NULL && head == NULL){
            tail = head = nptr;
            nptr->value = value;
            nptr->next = NULL;
            nptr->prev = NULL;
        }
        nptr->value = value;
        nptr->next = tail;
        nptr->prev= NULL;   
        tail = nptr;
    }

    void insertAtHead(int value){
        Node *nptr = new Node;
        if(tail == NULL && head == NULL){
            tail = head = nptr;
            nptr->value = value;
            nptr->next = NULL;
            nptr->prev = NULL;
        }
        else{
              nptr->value = value;
              nptr->next = NULL;
              nptr->prev = head;
              head = nptr;
        }
      
    }

    void displayFromHead(){
        Node *ptr = head;
        if(ptr == NULL)
            cout<<"Linked list is empty"<<endl;
        else{
            while(ptr != NULL){
                cout<<ptr->value<<"->";
                ptr = ptr->next;
            }
        }
    }
    void displayFromTail(){
        Node *ptr = tail;
        if(ptr == NULL)
            cout<<"Linked list is empty"<<endl;
        else{
            while(ptr != NULL){
                cout<<ptr->value<<"->";
                ptr = ptr->next;
            }
        }
    }

};
int main(){
   
   LinkedList list;
   cout<<"Select the follwing options for linked list\n";
   int choose;
   do{
        cout<<"\n Enter 1 for the Insert at Tail:";
        cout<<"\n Enter 2 for the Insert at Head:";
        cout<<"\n Enter 3 for the Insert at at any position:";
        cout<<"\n Enter 4 to display from head:";
        cout<<"\n Enter 5 to display from tail:";
        cout<<"\n Enter 6 to quit:";
        cin>>choose;

        switch(choose){
            int value;
            case 1 : {
                cout<<"Enter the value to insert at Tail:";
                cin>>value;
                list.insertAtTail(value);
                break;
            }
            case 2 :{
                 cout<<"Enter the value to insert at Head:";
                cin>>value;
                list.insertAtHead(value);
                break;
            }
            case 3 :{

            }
            case 4 :{
                cout<<" hhe value of linked list from head are:\n";
                list.displayFromHead();
                break;
            }
            case 5 :{
                cout<<" thhe value of linked list from tail are:\n";
                list.displayFromTail();
                break;
            }
            default: {
                cout<<"Enter the value in the range:";
            }

        }
   }while(choose <6);

    return 0;
}