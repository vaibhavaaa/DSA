/*
1111
 222
  33
   4
*/
#include <iostream>
using namespace std;
int main ()
{
   int i=1;
   while(i<=4){

      int space=1;
      while(space <=i-1){
         cout<<" ";
         space++;
      }
      int j=1;
      while(j<=4-i+1)
      {
         cout<<i;
         j++;
      }cout<<endl;
      i++;
      
   }
   
   return 0;
}