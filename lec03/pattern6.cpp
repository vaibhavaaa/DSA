/*
1
23
456
78910
*/
#include <iostream>
using namespace std;
int main ()
{
   int i=1;
   int count =1;
   while(i<=4){
      int j=1;
      while(j<=i){
         cout<<count;
         count++;
         j++;

      }
      cout<<endl;
      i++;
   }
   
   return 0;
}