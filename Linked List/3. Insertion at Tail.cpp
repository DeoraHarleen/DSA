#include<iostream>
using namespace std;

class Node
{
  public:
  int data;
  Node* next;
  
  Node(int data)
  {
      this->data=data;
      this->next=NULL;
  }
};

void insertAtTail(Node* &head, Node* &tail,int data)
{
    if(tail==NULL)
    {
      Node* temp=new Node(data);
      tail=temp;
      head=temp;
    }
    else
    {
      Node* temp=new Node(data);
      tail->next=temp;
      tail=temp;
    }
}

void print(Node* &head)
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
    // Node* node1=new Node(10);
    // Node* head=node1;
    // Node* tail=node1;
    Node* head=NULL; //head is NULL case
    Node* tail=NULL; //tail is NULL case
    
    print(head);
    
    insertAtTail(head, tail,12);
    print(head);
    
    insertAtTail(head, tail,15);
    print(head);
}
