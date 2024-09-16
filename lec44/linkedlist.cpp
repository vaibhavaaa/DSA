#include<bits/stdc++.h>
using namespace std;

class Node
{
   public:
   int data;
   Node* next;
   Node(int data)
   {
      this->data = data;
      this->next=NULL;
   }

   ~Node()
   {
      int value = this->data;
      if(this->next != NULL)
      {
         
         delete next;
         this ->next = NULL;
         // doubt

      }
      cout<<"this node is deleted->"<<value<<endl;
   }

};

Node* insertathead(Node* & head, int d){
   Node* temp = new Node(d);
   temp->next =head;
   head =temp;
   return head;
}
Node* insertattail(Node* &tail,int d)
{
   Node* temp = new Node(d);
   tail->next = temp;
   tail= tail->next;
   return tail;
}

void print(Node* &head){
   Node* temp = head;
   while(temp!=NULL){
      cout<<temp->data<<" ";
      temp=temp->next;
   }
   cout<<endl;
}
void deletenode(Node* &head,Node* &tail,int position)
{
   // start handle kr raha hun 
   if(position==1)
   {
      Node* temp = head;

      head=head->next;
      temp->next=NULL;
      delete temp;
      

   }
   else
   {
      Node * curr = head;
      Node * prev = NULL;
      
      int cnt =1;
      while(cnt < position)
      {
         prev= curr;
         curr=curr->next;
         cnt++;
      }
      if(curr->next ==NULL)
      {
         tail = prev;
         prev->next =NULL;
        
         delete curr;

      }else
      {
      prev->next = curr->next;
      curr->next=NULL;
      delete curr;
         
      }
      
   }

}
Node* insertafterposition(Node* &head,int position,int d)
{
   Node* ptr = head;
   Node* temp = new Node(d);
   int count =1;
   while(count<position)
   {
      ptr=ptr->next;
      count++;
   }
   temp->next= ptr->next;
   ptr->next = temp;
   return head;

}
Node* insertatposition(Node* &head,Node* &tail, int position, int d)
{
   Node* ptr = head;
   Node* temp = new Node(d);
   int count = 1;
    

   if(position ==1){
      return insertathead(head,d);
   }
   while(count<position-1){
      ptr=ptr->next;
      count++;
   }
   temp->next=ptr->next;
   ptr->next=temp;

   if(temp->next == NULL){
      tail=temp;
   }
   return head;
}
int main()
{
   Node* head= new Node(10);
   Node* tail=head;

   head=insertathead(head,15);
   tail=insertattail(tail,12);


   head = insertatposition(head,tail,1,11);
   print(head);
   cout<<"head->"<<head->data<<endl;
   cout<<"tail->"<<tail->data<<endl;
   head = insertatposition(head,tail,5,13);
   print(head);   
   cout<<"head->"<<head->data<<endl;
   cout<<"tail->"<<tail->data<<endl;

   deletenode(head,tail,5);
   print(head);   
   cout<<"head->"<<head->data<<endl;
   cout<<"tail->"<<tail->data<<endl;

}