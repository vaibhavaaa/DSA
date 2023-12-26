/*
123
456
789
*/
#include <iostream>
using namespace std;
int main ()
{
   int i=1;
   int count =1;
   while(i<=3){
      int j=1;
      while(j<=3){
         cout<<count;
         count++;
         j++;
      }cout<<endl;
      i++;
   }
   return 0;
}