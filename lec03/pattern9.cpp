/*
1
21
321
4321
*/
#include <iostream>
using namespace std;
int main ()
{
   int i=1;
   while(i<=4){
      int count =i;
      int j=1;
      while(j<=i){
         cout<<count;
         count--;
         j++;
      }
      cout<<endl;
      i++;
   }
   
   return 0;
}