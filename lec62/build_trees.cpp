#include <iostream>
#include<bits/stdc++.h>
using namespace std;
class node{
   public:
   int data;
   node* left;
   node* right;
   node(int d){
      this->data=d;
      this->left=NULL;
      this->right=NULL;
   }
   
};

node* buildtree(node* root){
   cout<<"Enter the data"<<endl;
   int data;
   cin>>data;
   root=new node(data);
   
   if(data==-1){
      return NULL;
   }
   cout<<"Enter data for entering in left "<<endl;
   root->left= buildtree(root->left);
   cout<<"Enter data for entering in right "<<endl;
   root->right= buildtree(root->right);
   return root;
}
void levelorderTraversal(node* root){
   queue<node*> q;
   q.push(root);
   q.push(NULL);

   while(!q.empty()){
      node* temp = q.front();
      q.pop();

      if(temp == NULL){
         // purane level complete travers ho chuka hain
         cout<<endl;
      if(!q.empty()){
         q.push(NULL);
      }
      else{
         cout<<temp->data<<" ";
         if(temp->left){
            q.push(temp->left);

         }
         if(temp->right){
            q.push(temp->right);
         }
      }

      }
   }
}
int main ()
{
   
   return 0;
}