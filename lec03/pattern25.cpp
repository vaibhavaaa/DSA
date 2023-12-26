/*
1234
 234
  34
   4
*/
#include <iostream>
using namespace std;
int main ()
{
   int i=1;
   while(i<=4){
      int k=i;
      int space =1;
      while(space <=i-1){
         cout<<" ";
         space++;
      }
      int col=1;
      while(col<=4-i+1){
         cout<<k;
         k++;
         col++;
      }cout<<endl;
      i++;
   }
   
   return 0;
}