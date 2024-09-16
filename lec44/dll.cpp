#include<bits/stdc++.h>
using namespace std;

class Node
{
   public:
   int data;
   Node* next;
   Node* prev;
   Node(int value)
   {
      this->data= value;
      this->next = NULL;
      this->prev = NULL;
   }
   ~Node()
   {
      int value = this->data;

      if(this->next!=NULL){
         delete next;
         this->next=NULL;
      }
      cout<<"memory freed with data "<<value<<endl;

   }

};

Node* insertatstart(Node* &head, int d)
{
   Node* temp=  new Node(d);
   temp->next = head;
   head->prev= temp;
   head = temp;
   return head;
}

Node* insertatend(Node* &tail, int d)
{
   Node* temp = new Node(d);
   tail->next = temp;
   temp->prev = tail;
   tail = temp;
   return tail;
}
Node* insertatpostion(Node* &head,Node* &tail,int position, int d)
{
   // starting handle kr rah hun
   if(position==1)
   {
      head = insertatstart(head,d);
   }
   Node* temp = new Node(d);
   int cnt =1;
   Node* ptr = head;

   
   while(cnt < position-1) // bhai meh position  ke just pehle vaale node tak pohchane ka kaam kr raha hun
   {
      ptr= ptr->next;
      cnt ++;

   }
   // end handle kr raha hun
   if(ptr->next ==NULL)
   {
      tail = insertatend(tail, d);
   }else
   {
      ptr->next->prev=temp;
      temp->next = ptr->next;
      ptr->next = temp;
      temp->prev = ptr;

   }
   

return head;



}

Node* deletenode(Node* &head,Node* &tail,int position)
{
   Node* temp = head;
   Node* prev = NULL;
   int cnt =1;
   if(position==1)
   {
      Node * temp = head;
      temp->next->prev = NULL;
      head = temp->next;
      temp->next = NULL;
      delete temp;
   }else{
   while(cnt<position)
   {
      prev= temp;
      temp = temp->next;
      cnt++;
   }
   if(temp->next == NULL)
   {
      tail = prev;
      prev->next = NULL;
      temp->next = NULL;
      temp->prev=NULL;
      delete temp;
       
   }
   else{
   prev->next=temp->next;
   temp->next->prev = temp->prev;
   temp->next=NULL;
   temp->prev=NULL;
   delete temp;
   }
   }
return head;

}
void print(Node *&head)
{
   Node* temp = head;
   while(temp != NULL)
   {
      cout<<temp->data<<" ";
      temp = temp->next;
   }
   cout<<endl;

}


int main()
{
   Node* head = new Node(2);
   Node* tail = head;
  
   head = insertatstart(head, 1);
   tail = insertatend(tail, 3);
   print(head);
   cout<<"head ->"<<head->data<<endl;
   cout<<"tail ->"<<tail->data<<endl;

   head = insertatpostion(head, tail, 2, 4);
   print(head);
   cout<<"head ->"<<head->data<<endl;
   cout<<"tail ->"<<tail->data<<endl;

   head = insertatpostion(head, tail, 5, 5);
   print(head);
   cout<<"head ->"<<head->data<<endl;
   cout<<"tail ->"<<tail->data<<endl;

   head = deletenode(head ,tail,1);
   print(head);
   cout<<"head ->"<<head->data<<endl;
   cout<<"tail ->"<<tail->data<<endl;


   head = deletenode(head, tail,4);
   print(head);
   cout<<"head ->"<<head->data<<endl;
   cout<<"tail ->"<<tail->data<<endl;
   
   head = deletenode(head, tail,2);
   print(head);
   cout<<"head ->"<<head->data<<endl;
   cout<<"tail ->"<<tail->data<<endl;

   
}