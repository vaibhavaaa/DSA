/*
A
BB
CCC
*/
#include <iostream>
using namespace std;
int main ()
{
   int i=1;
   while(i<=3){
      int j=1;
      while(j<=i){
         char ch = 'A'+i-1;
         cout<<ch;
         j++;
      }cout<<endl;
      i++;
   }
   
   return 0;
}