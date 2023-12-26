/*
   1
  121
 12312
1234123 

*/
#include <iostream>
using namespace std;
int main ()
{
   int i=1;
   while(i<=4){
      int space=1;
      while(space<=4-i){
         cout<<" ";
         space++;
      }
      int count =1;
      int j=1;
      while(j<=i){
         cout<<count;
         j++;
         count++;
      }
      int k=1;
      int z =i;
      while(k<=i-1){
         cout<<z-1;
         z--;
         k++;
      }cout<<endl;
      i++;

   }
   
   return 0;
}