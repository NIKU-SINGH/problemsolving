#include<bits/stdc++.h>
using namespace std;

struct Node{
    int value;
    Node *next;
};

class LinkedList{
    Node *head = NULL;
    public:

    void insert(int value){
        Node *nptr = new Node();
        nptr->value = value;
        if(head == NULL){
            nptr->next = NULL;
            head = nptr;
        }
        else {
            nptr->next = head;
            head = nptr;
        }
    }

    void insertAt(int value, int pos){
        Node *nptr = new Node();
        Node *temp = head;
        nptr->value = value;
        if(pos == 1){
            nptr->next = head;
            head=nptr;
        }
        else{
            for(int i=0;i<pos-2;i++){
                temp = temp->next;
            }
            nptr->next = temp->next;
            temp->next = nptr;
        }
        
    }

    int deleteAt(int pos){
        Node *temp1 = head;
        Node *temp2;
        int val;
        if(pos == 1){
            head = temp1->next;
            delete(temp1);
        }
        for(int i=0;i<pos-2;i++){
            temp1 = temp1->next;
        }
            temp2 = temp1->next;
            temp1->next = temp2->next;
            val = temp2->value;
            delete(temp2);
            return val;
    }

    void display(){
            Node *temp = head;
            while(temp != NULL){
                cout<<temp->value<<"->";
                temp = temp->next;
            }
    }
    void reverse(){
        Node *current,*prev,*next;
        current = head;
        prev = NULL;
        while(current != NULL){
            next = current->next;
            current->next = prev;
            prev = current;
            current = next;
        }
        head = prev;
    }
};

int main(){
    LinkedList list;
   
    cout<<"Select the follwing options for linked list\n";
    int choose;
    do{
        cout<<"\n Enter 1 for the Insert:";
        cout<<"\n Enter 2 to insert value at any position in list";
        cout<<"\n Enter 3 delete value at any position in list";
        cout<<"\n Enter 4 to display:";
        cout<<"\n Enter 5 to reverse:";
        cout<<"\n Enter 6 to quit:\n";
        cin>>choose;

        switch(choose){
            int value;
            int pos;
            case 1 : {
                cout<<"Enter the value to insert";
                cin>>value;
                list.insert(value);
                break;
            }
            case 2 :{
                 cout<<"Enter the value And position to insert";
                cout<<"\nValue:";
                cin>>value;
                cout<<"\nPosition:";
                cin>>pos;
                list.insertAt(value,pos);
                break;
            }
            case 3 :{
                cout<<"EEnter the position to delete value:";
                cin>>pos;
                int deletedValue = list.deleteAt(pos);
                cout<<"\n the deleted value is :"<<deletedValue<<endl;
                break;
            }
            case 4 :{
                cout<<" the value of linked list are:\n";
                list.display();
                break;
            }
            case 5 :{
                cout<<" List after reverseing is:\n";
                list.reverse();
                list.display();
                break;
            }
            default: {
                cout<<"Enter the value in the range:";
            }

        }
   }while(choose <6);

    return 0;
}