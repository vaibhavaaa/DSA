#include <iostream>
#include<vector>
using namespace std;
vector<int> reverse(vector<int> p, int  k){
   vector<int> temp(p.size()); // creating a vector containing the same size
   int n=p.size();
   for(int i=0;i<n;i++){
      temp[(i+k)%n]=p[i];
   }
   //copy the temp vector into p;
   
   return temp;
}
void print(vector<int> p){
   for(int i : p){
      cout<<i<<" ";
   }
   cout<<endl;
}
int main ()
{
   vector<int> p ={1,3,4,5,8};
   int k =2;
   vector <int >ans =reverse(p, k);
   print(ans);
   
   return 0;
}