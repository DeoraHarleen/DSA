#include<iostream>
using namespace std;

class Node
{
  public:
  int data;
  Node* next;
  
  //constructor
  Node(int data)
  {
      this->data=data;
      this->next=NULL;
  }
};

void insertAtHead(Node* &head, int data)
{
  if(head==NULL)
  {
    Node* temp=new Node(d);
    head=temp; 
  }
  else
  {
    Node* temp=new Node(data);
    temp->next=head;
    head=temp;
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
    Node* node1=new Node(10);
    Node* head=node1;
    //Node*head=NULL //empty linkedlist case
    
    print(head);
    
    insertAtHead(head,12);
    print(head);
    
    insertAtHead(head,15);
    print(head);
    return 0;
}
