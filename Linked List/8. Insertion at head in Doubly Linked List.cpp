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

void insertAtHead(Node* &head, int d)
{
    Node* temp=new Node(d);
    temp->next=head;
    head->prev=temp;
    head=temp;
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
    print(head);
    
    insertAtHead(head,20);
    print(head);
    
    insertAtHead(head,30);
    print(head);
    
    insertAtHead(head,40);
    print(head);
    
}
