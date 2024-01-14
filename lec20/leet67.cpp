#include <iostream>
#include <vector>
using namespace std;
// reverse from the next element from the given index
 vector<int> reverse(vector<int> p, int index){
   int start =index+1;
   int end = p.size()-1;
   while(start <end){
      swap(p[start],p[end]);
      start ++;
      end--;
   }
   return p;
}
void print(vector<int> p){
   for(int i: p){
      cout<<i<<" ";
   }
   cout<<endl;
}
int main ()
{
   vector<int> p;
   p.push_back(2);
   p.push_back(3);
   p.push_back(15);
   p.push_back(17);
   
   int index=1;
   vector<int> ans = reverse(p,index);
   print(ans);
   
   return 0;
}