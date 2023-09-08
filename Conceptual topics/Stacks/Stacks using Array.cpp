#include<climits>
#include<iostream>
using namespace std;
class StackUsingArray
{
    //private
    int *data;  //Dynamic array created serving as stack
    int nextIndex;  //To keep track of current top index
    int capacity;   //To keep track of total size of stack
    
    public:
    StackUsingArray(int totalSize)  //Constructor to initialise the value
    {
        data=new int[totalSize];
        nextIndex=0;
        capacity=totalSize;
    }
    
    //return number of elements present in my Stack
    int size()
    {
        return nextIndex;
    }
    
    bool isEmpty()
    {
        /*
        if(nextIndex==0)
        {
            return true;
        }
        else
        {
            return false;
        }
        */
        return nextIndex==0; //This is same short hand code for above commented program
    }
    
    //insert element
    void push(int element)
    {
        if(nextIndex==capacity)
        {
            cout<<"Stack full "<<endl;
            return;
        }
        data[nextIndex]=element;
        nextIndex++;
    }
    
    //delete element
    int pop()
    {
        if(isEmpty())
        {
            cout<<"stack is empty "<<endl;
            return INT_MIN;
        }
        nextIndex--;
        return data[nextIndex];
    }
    
    //return top element of stack
    int top()
    {
        if(isEmpty())
        {
            cout<<"Stack is empty "<<endl;
            return INT_MIN;
        }
        return data[nextIndex-1];
    }
    
    //printing the elements
     void printStack()  //check underflow condition
     {
        if (isEmpty()) 
        { 
            cout << "Stack is empty" << endl;
            return;
        }

        cout << "Elements in the stack:" << endl;
        for (int i = 0; i < nextIndex; i++) {
            cout << data[i] << " ";
        }
        cout << endl;
    }
};

int main()
{
    StackUsingArray stack(5);
    stack.push(5);
    stack.push(8);
    stack.push(10);
    stack.push(1);
    stack.printStack();
    cout<<"Popped element is "<<stack.pop()<<endl;
    stack.printStack();
    cout<<"Topmost element after pop is: "<<stack.top()<<endl;
    cout<<"Popped element is "<<stack.pop()<<endl;
    stack.printStack();
    cout<<"Topmost element after pop is "<<stack.top()<<endl;
    cout<<"Stack is empty or not(0 or 1 respectively): "<<stack.isEmpty();
}
