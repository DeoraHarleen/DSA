//Brute Force Solution
/*
#include<iostream>
#include<stack>
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

Node* ReverseLinkedList(Node* &head)
{
    Node* temp=head;
    
    //creating stack
    stack<int> st;
    
    //step1: Push values in stack
    while(temp!=NULL)
    {
        st.push(temp->data);
        temp=temp->next;
    }
    
    //step 2: reset temp to head of LL
    temp=head;
    
    while(temp!=NULL)
    {
        //set current node's data to value at top of stack
        temp->data=st.top();
        st.pop();
        temp=temp->next;
    }
    
    return head;
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
    Node* head=new Node(1);
    //easy way of  creating new node without function
    head->next=new Node(2);
    head->next->next=new Node(3);
    head->next->next->next=new Node(4);
    cout<<"Original Linked List: ";
    print(head);
    
    head=ReverseLinkedList(head);
    cout<<"Reversed Linked List: ";
    print(head);
}
*/
//TC: O(2N) as we traveresed Linked List twice, once pushing into stack and once poping from stack, O(2N) ~ O(N)
//SC: O(N) as we are storing values in the stack

//Optimal Sol: Iterative Method
// #include<iostream>
// #include<stack>
// using namespace std;

// class Node
// {
//   public:
//   int data;
//   Node* next;
  
//   Node(int data)
//   {
//       this->data=data;
//       this->next=NULL;
//   }
// };

// void ReverseLinkedList(Node* &head)
// {
//     Node* temp=head;
//     Node* prev=NULL;
    
//     while(temp!=NULL)
//     {
//         Node* front=temp->next;
//         temp->next=prev;
//         prev=temp;
//         temp=front;
//     }
//     head=prev;
// }

// void print(Node* &head)
// {
//     Node* temp=head;
    
//     while(temp!=NULL)
//     {
//         cout<<temp->data<<" ";
//         temp=temp->next;
//     }
//     cout<<endl;
// }

// int main()
// {
//     Node* head=new Node(1);
//     //easy way of  creating new node without function
//     head->next=new Node(2);
//     head->next->next=new Node(3);
//     head->next->next->next=new Node(4);
//     cout<<"Original Linked List: ";
//     print(head);
    
//     ReverseLinkedList(head);
//     // head=ReverseLinkedList(head);
//     cout<<"Reversed Linked List: ";
//     print(head);
// }
// TC: O(N)
// SC: O(1)



