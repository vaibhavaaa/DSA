#include <iostream>
using namespace std;
bool isprime(int n){
  int flag =1;
   for(int i=2;i<n;i++){
      if (n%i==0){
         flag=0;
      }
   }
   return flag==1;
}
int main ()
{
   cout<<isprime(11);
   
   return 0;
}