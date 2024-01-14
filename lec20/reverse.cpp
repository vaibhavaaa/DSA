#include <iostream>
#include<vector>
using namespace std;
vector<int> reverse(vector<int> p){
   int start =0;
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
   
   vector<int> ans = reverse(p);
   print(ans);
   
   return 0;
}