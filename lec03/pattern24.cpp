/*
   1
  22
 333
4444
*/
#include <iostream>
using namespace std;
int main ()
{
   int i=1;
   while(i<=4){
      int j=1;
      while(j<=4-i){
         cout<<" ";
         j++;
      }
      int num=1;
      while(num<=i){
         cout<<i;
         num++;
      }cout<<endl;
      i++;
   }
   
   return 0;
}