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
        while()
        nptr->value = value;
        if( head == NULL && tail == NULL ){
            head = tail = nptr;
            nptr->next = NULL;
            nptr->prev = NULL;
        }
        else{
            nptr->prev=tail;
            nptr->next=NULL;
            tail = nptr;
        }   
    }

    void insertAtHead(int value){
        Node *nptr = new Node;
        nptr->value = value;
        if( head == NULL && tail == NULL ){
            head = tail = nptr;
            nptr->next = NULL;
            nptr->prev = NULL;
        }else {
            nptr->next = head;
            nptr->prev=NULL;
            head = nptr;
        }
    }

    void display(){
        if(head == NULL)
            cout<<"Linked list is empty"<<endl;
        else{
            Node *temp = head;
            while(temp != NULL){
                cout<<temp->value<<"->";
                temp = temp->next;
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
        cout<<"\n Enter 4 to display:";
        cout<<"\n Enter 5 to quit:";
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
                cout<<" thhe value of linked list are:\n";
                list.display();
                break;
            }
            default: {
                cout<<"Enter the value in the range:";
            }

        }
   }while(choose <5);

    return 0;
}