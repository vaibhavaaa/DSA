#include <iostream>
using namespace std;
int main ()
{
   int n;
   cin>>n;
   int flag=0;
   for(int i=2;i<n;i++){
      if(n%i==0){
         flag=1;
         break;
      }
   }
   if(flag==0){
      cout<<"number is a prime";
   }else {
      cout<<"the number is not a prime";
   }
   
   return 0;
}