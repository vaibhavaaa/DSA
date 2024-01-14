#include <iostream>
#include <list>
using namespace std;
int main ()
{
   list<int> l(5,100);
   cout<<" printing list"<<endl;
   for(int i: l){
      cout<<i<<" ";
   }cout<<endl;
   list<int> a;
   a.push_back(1);
   a.push_front(2);
   for(int i: a){
      cout<<i<<" ";
   }
   cout<<endl;
   return 0;
}