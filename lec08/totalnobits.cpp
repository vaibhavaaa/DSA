#include <iostream>
using namespace std;
int totalnobits(int n, int x){
   int count =0;
   while(n!=0){
      count = count +(n&1);
      n=n>>1;
   }
   while(x!=0){
      count = count +(x&1);
      x=x>>1;
   }

return count;
};
int main ()
{
   int ans= totalnobits(2,3);
   cout<<ans;
   
   return 0;
}