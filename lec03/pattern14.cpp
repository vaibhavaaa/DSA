/*
ABC
BCD
CDE
*/
#include <iostream>
using namespace std;
int main ()
{
   int i=0;
   while(i<3){
      char ch ='A'+i;
      int j=1;
      while(j<=3){
         cout<<ch;
         ch++;
         j++;
      }
      cout<<endl;
      i++;
   }
   
   return 0;
}