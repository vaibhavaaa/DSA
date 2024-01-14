/*
learning standard templete library
stl
*/
#include <iostream>
#include <vector>
using namespace std;
int main ()
{
   vector<int> p;
   cout<<"capacity ->"<<p.capacity()<<endl; 
   p.push_back(1);
   cout<<"capacity ->"<<p.capacity()<<endl; 
   p.push_back(2);
    cout<<"capacity ->"<<p.capacity()<<endl; 
   p.push_back(3);
    cout<<"capacity ->"<<p.capacity()<<endl; 
    p.push_back(5);
     cout<<"capacity ->"<<p.capacity()<<endl; 
     p.push_back(6);
      cout<<"capacity ->"<<p.capacity()<<endl; 
    cout<<"size ->"<<p.size()<<endl; 
    cout<<p.front()<<endl;
    cout<<p.back()<<endl;
   cout<<"before pop"<<endl;
   for(int i : p){
      cout<<i<<" ";
   }cout<<endl;
   p.pop_back();
   cout<<" after pop "<<endl;
   for(int i : p){
      cout<<i<<" ";
   }cout<<endl;
   cout<<" before vector clear"<<endl;
   cout<<p.size()<<endl;
   p.clear();
   cout<<" after vector clear"<<endl;
   cout<<p.size()<<endl;
   
// intializing a vector of size 5 and intializing each element as 1;
   int k=1;
   vector <int> a(5,k);
   cout<<"print a"<<endl;
   for(int i :a){
      cout<<i<<" ";

   }cout<<endl;
// copying a vector into another vector;
vector <int> last(a);
cout<<"print last "<<endl;
for(int s: last){ 
   cout<<s<<" ";
}
   

   return 0;
}