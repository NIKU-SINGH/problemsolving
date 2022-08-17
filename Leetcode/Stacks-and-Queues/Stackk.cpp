#include<bits/stdc++.h>
using namespace std;

class Stack {
    int size;
    int *st;
    int top;
    public:

    void create(int size){
        this->size = size;
        this->st = new int[size];
        this->top = -1;
    }
    void push(int val){
        if(this->top == this->size) cout<<"stack overflow\n"<<endl;
        else{
            this->top ++;
            st[this->top] = val;
        }
    }
    int pop(){
        if(this->top == -1){
            cout<<"stack underflow\n"<<endl;
            return -1;
        }
            int x = st[this->top];
            this->top --;
            return x;
    }
    int stackTop(){
        return st[this->top];
    }
    int isEmpty(){
        if(this->top == -1) return 1;
        else return 0;
    }
    int isFull(){
        if(this->top == this->size) return 1;
        else return 0;
    }
    
    void display(){
        for(int i=this->top;i>=0;i--){
            cout<<st[i]<<" ";
        }
    }
};

int main(){
    Stack st;
    int size;
    cout<<"Enter the size of the stack to create\n"<<endl;
    cin>>size;
    st.create(size);
    int num;
    do
    {
        cout << "Enter 1 for Push:\n";
        cout << "Enter 2 for Pop:\n";
        cout << "Enter 3 for Display:\n";
        cout << "Enter 4 for to check isEmpty:\n";
        cout << "Enter 5 for to check isFull:\n";
        cout << "Enter 6 for to print stack top:\n";
        cout << "Enter 7 for Exit:\n";
        cin >> num;
        switch (num)
        {
            case 1:
            {
                cout << "Enter number to push:";
                int x;
                cin >> x;
                st.push(x);
                break;
            }
            case 2:
            {
                cout << "poped number:";
                cout << st.pop() << "\n";
                break;
            }
            case 3:
            {
                st.display();
                break;
            }
            case 4:
            {
                if (st.isEmpty() == 1)
                {
                    cout << "Stack is Empty\n";
                }
                else
                    cout << "Stack is Not Empty\n";
                break;
            }
            case 5:
            {
                if (st.isFull() == 1)
                {
                    cout << "Stack is full\n";
                }
                else
                    cout << "Stack is not full\n";
            break;
            }
            case 6:
            {
                int n = st.stackTop();
                cout << "Stack top element is:" << n << "\n";
            break;
            }
            default:break;
       }
    }while (num<=7);
}