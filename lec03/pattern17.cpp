/*
A
BC
DEC
GHIJ
*/
#include <iostream>
using namespace std;
int main ()
{
   int i=1;
   char count ='A';
   while(i<=4){
      int j=1;
      while(j<=i){
         cout<<count;
         count++;
         j++;
      }cout<<endl;
      i++;
   }
   
   return 0;
}