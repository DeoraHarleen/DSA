#include<iostream>
using namespace std;

class Node
{
    public:
    int data;
    Node* prev;
    Node* next;
    
    Node(int d)
    {
        this->data=d;
        this->prev=NULL;
        this->next=NULL;
    }
};

void insertAtTail(Node* &tail, int d)
{
    Node* temp=new Node(d);
    tail->next=temp;
    temp->prev=tail;
    tail=temp;
}

//traversing a linked list
void print(Node* head)
{
    Node* temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

int main()
{
    Node* node1=new Node(10);
    Node* head=node1;
    Node* tail=node1;
    print(head);
    
    insertAtTail(tail,20);
    print(head);
    
    insertAtTail(tail,30);
    print(head);
    
    insertAtTail(tail,40);
    print(head);
    return 0;
}
