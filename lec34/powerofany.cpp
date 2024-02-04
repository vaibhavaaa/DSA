#include <iostream>
using namespace std;
int power(int a , int b){
   // base case
   if(b==0){
      return 1;
   }
   if(b==1){
      return a;
   }
   // recursive call example a^9 = a*(a^4)*(a^4); a^8 =(a^4)*(a^4);
   int ans = power(a, b/2);
   if(b%2==0){
      return ans*ans;
   }
   else{
      return a*ans*ans;
   }
}
int main ()
{
   int ans = power(2,10);
   cout<<ans<<endl;
   
   return 0;
}