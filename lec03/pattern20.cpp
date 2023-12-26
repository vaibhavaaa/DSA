/*
   *
  **
 ***
****

*/
#include <iostream>
using namespace std;
int main ()
{
   int i=1;
   while(i<=4){
      int space=4-i;
      int k=1;
      while(k<=space){
         cout<<" ";
         k++;
      }
      int j=1;
      while(j<=i){
         cout<<"*";
         j++;
      }cout<<endl;
      i++;
   }
   
   return 0;
}