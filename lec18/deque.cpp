#include <iostream>
#include <deque>

using namespace std;
int main ()
{
   deque<int> q;

   q.push_back(2);
   q.push_front(1);
   
    for(int i : q){
      cout<<i<<" ";
    }cout<<endl;
   
   cout<<" print element at index first index ->"<<q.at(1)<<endl;
   
   cout<<"front ->"<<q.front()<<endl;
   cout<<"back ->"<<q.back()<<endl;


   cout<<" empty or not -> "<<q.empty()<<endl;
   cout<<"before erase ->:"<<q.size()<<endl;
   q.erase(q.begin(), q.begin()+1);
   cout<<"after erase ->:"<<q.size()<<endl;
   return 0;
}