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

void insertAtTail(Node* &head, Node* &tail, int data)
{
    if(tail==NULL)
    {
        Node* temp=new Node(data);
        head=temp;
        tail=temp;
    }
    else
    {
        Node* temp=new Node(data);
        tail->next=temp;
        tail=temp;
    }
   
}

void insertAtPosition(Node* &head, Node* &tail, int position, int data)
{
    Node* temp=new Node(data);
    
    if(position==1) //Special Case: Insertion at head
    {
        temp->next=head;
        head=temp;
        return;
    }
    
    Node* temp1=head;
    int count=1; //Counter to keep track of position
    while(temp1!=NULL&&count<position-1) //for inserting at pos, we will traverse till pos-1 node
    {
        temp1=temp1->next;
        count++;
    }
    if(temp1==NULL)
    {
        cout<<"List is empty"<<endl;
    }
    else
    {
        temp->next=temp1->next;
        temp1->next=temp;

        //Inserting after tail and updating tail pointer to point to last node (which is being added)
        if(temp->next==NULL)
        {
            tail=temp;
        }
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
    Node* node1= new Node(10);
    Node* head=node1;
    Node* tail=node1;
    
    //Checking for empty list
    // Node* head=NULL;
    // Node* tail=NULL;
    
    insertAtTail(head, tail, 20);
    insertAtTail(head, tail, 30);
    insertAtTail(head, tail, 40);
    print(tail);
    insertAtPosition(head,tail, 3,25);
    print(head);
    print(tail);

   
}
