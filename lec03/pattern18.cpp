/*
A
BC
CDE
DEFG
*/

#include <iostream>
using namespace std;
int main ()
{
   int i=1;
   while(i<=4){
      int j=1;
      while(j<=i){
         char ch = 'A'+i+j-2;
         cout<<ch;
         j++;
         
      }cout<<endl;
      i++;
   }
   
   return 0;
}