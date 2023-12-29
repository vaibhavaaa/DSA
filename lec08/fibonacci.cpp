#include <iostream>
using namespace std;
int fibomacci(int n){
      int a=0, b=1;
      int count =2;
      if(n==1){
         return 0;
      }else if(n==2){
         return 1;
      }
      for (int i=1;i<=n;i++){
         int nextnumber = a+b;
         count++;
         if(count==n){
            return nextnumber;
         }
         a=b;
         b= nextnumber;
      }
};
int main ()
{
   int ans= fibomacci(2);
   cout<<ans;
   
   return 0;
}