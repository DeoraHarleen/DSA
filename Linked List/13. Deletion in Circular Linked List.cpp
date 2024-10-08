#include<iostream>
using namespace std;

class Node
{
    public:
    int data;
    Node* next;
    
    Node(int d)
    {
        this->data=d;
        this->next=NULL;
    }
    
    ~Node()
    {
        if(this->next!=NULL)
        {
            delete next;
            next=NULL;
        }
    }
};

void insertNode(Node* &tail, int element, int d)
{
    //empty list
    if(tail==NULL)
    {
        Node* temp=new Node(d);
        tail=temp;
        temp->next=temp;
    }
    
    //non empty list
    //assuming that element is present in list
    else
    {
        Node* curr=tail;
        while(curr->data!=element)
        {
            curr=curr->next;
        }
        
        //element found
        Node* temp=new Node(d);
        temp->next=curr->next;
        curr->next=temp;
    }
}

void deleteNode(Node* &tail, int value)
{
    //empty list
    if(tail==NULL)
    {
        cout<<"List is empty";
    }
    
    else
    {
        //non empty
        //asssuming that value is present in linked List
        Node* prev=tail;
        Node* curr=prev->next;
        
        while(curr->data!=value)
        {
            prev=curr;
            curr=curr->next;
        }
        
        prev->next=curr->next;
        
        //one node linked List
        if(curr==prev)
        {
            tail=NULL;
        }
        
        //two node linked list
        if(tail==curr)
        {
            tail=prev;
        }
        curr->next=NULL;
        delete curr;
        
    }
}

void print(Node* tail)
{
    Node* temp=tail;
    if(tail==NULL)
    {
        cout<<"List is empty";
        return;
    }
    
    do{
        cout<<tail->data<<" "; 
        tail=tail->next;
    } while(tail!=temp);
    cout<<endl;
}

int main()
{
    Node* tail=NULL;
    
    //inserting in empty list
    insertNode(tail, 5, 3);
    print(tail);
    
    insertNode(tail, 3, 5);
    print(tail);
    
    insertNode(tail, 5, 7);
    print(tail);
    
    insertNode(tail, 7, 9);
    print(tail);
    
    insertNode(tail, 5, 6);
    print(tail);
    
    insertNode(tail, 9, 10);
    print(tail);
    
    insertNode(tail, 3, 4);
    print(tail);
    
    deleteNode(tail, 7);
    print(tail);
    
    deleteNode(tail, 3);
    print(tail);
    
    deleteNode(tail, 5);
    print(tail);
    return 0;
}
