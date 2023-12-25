#include <iostream>
using namespace std;
int main ()
{
   int n, i=2;
   int flag =0;
   cout<<"enter a number : ";
   cin>>n;
   while (i<n){
      if(n%i==0){
         flag =1;
         break;
      }
      i++;
   }
   if(flag==1){
      cout<<n<<" is not a prime";
   }else{
      cout<<n<<" is a prime";
   }
   return 0;
}