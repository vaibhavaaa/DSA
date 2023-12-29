#include <iostream>
using namespace std;
int fact(int n){
   int fact=1;
   for(int i=1;i<=n;i++){
      fact=fact *i;
   }
   return fact;

};
int combination(int n , int r){
   int num= fact(n);
   int deno= fact(r) * fact(n-r);
   return num/deno;
}
int main ()
{
   int ans=combination(8,2);
   cout<<ans;
   
   return 0;
}