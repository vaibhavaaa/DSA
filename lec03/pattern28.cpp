// dabangg pattern
/*
1234554321
1234**4321
123****321
12******21
1********1
*/
#include <iostream>
using namespace std;
int main ()
{
   int i=1;
   while(i<=5){
      int k=1;
      int count=1;
      while(k<=5-i+1){
         cout<<count;
         k++;
         count++;
      }
      int j1=1;
      while(j1<=i-1){
         cout<<"*";
         j1++;
      }
      int j2=1;
      while(j2<=i-1){
         cout<<"*";
         j2++;
      }
      int j3=1;
      int count2=5;
      while(j3<=5-i+1){
         cout<<count2;
         count2--;
         j3++;
      }
      cout<<endl;
      i++;
   }
   
   return 0;
}