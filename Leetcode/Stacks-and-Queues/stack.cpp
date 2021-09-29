#include <iostream>
using namespace std;

struct Stack
{
    int size;
    int top;
    int *S;
};

void create(Stack *st)
{
    cout << "Enter size:";
    cin >> st->size;
    st->top = -1;
    st->S = new int[st->size];
}
void display(Stack st)
{
    cout << "Displaying stack\n";
    for (int i = st.top; i >= 0; i--)
    {
        cout << st.S[i] << "\n";
    }
}
void push(Stack *st, int num)
{
    if (st->top == st->size - 1)
    {
        cout << "Stack overflow";
    }
    else
    {
        st->top++;
        st->S[st->top] = num;
    }
}

int pop(Stack *st)
{
    int x = -1;
    if (st->top < 0)
    {
        cout << "Stack Underflow";
    }
    else
    {
        x = st->S[st->top--];
    }
    return x;
}
int peek(Stack st, int index)
{
    int x = -1;
    if (st.top - index + 1 < 0)
    {
        cout << "Invalid index";
    }
    else
    {
        x = st.S[st.top - index + 1];
    }
    return x;
}
int isEmpty(Stack st)
{
    if (st.top == -1)
    {
        return 1;
    }
    else
        return 0;
}
int isFull(Stack st)
{
    if (st.top == st.size - 1)
    {
        return 1;
    }
    else
        return 0;
}
int stackTop(Stack st)
{
    if (st.top == -1)
    {
        return -1;
    }
    else
    {
        return st.S[st.top];
    }
}

int main()
{
    Stack happy;
    create(&happy);
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
                push(&happy, x);
                break;
            }
            case 2:
            {
                cout << "poped number:";
                cout << pop(&happy) << "\n";
                break;
            }
            case 3:
            {
                display(happy);
                break;
            }
            case 4:
            {
                if (isEmpty(happy) == 1)
                {
                    cout << "Stack is Empty\n";
                }
                else
                    cout << "Stack is Not Empty\n";
                break;
            }
            case 5:
            {
                if (isFull(happy) == 1)
                {
                    cout << "Stack is full\n";
                }
                else
                    cout << "Stack is not full\n";
            break;
            }
            case 6:
            {
                int n = stackTop(happy);
                cout << "Stack top element is:" << n << "\n";
            break;
            }
            default:
                break;
       }
    }while (num<=7);

return 0;
}