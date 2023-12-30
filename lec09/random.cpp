#include <iostream>
using namespace std;
int poweroftwo(int n){
   int count=0;
   while(n!=0){
      count=count+(n&1);
      n=n>>1;
   }
   return count;
};
int main ()
{
   int ans =poweroftwo(16);
   if (ans==1){
      cout<<"number is power of two"<<endl;
   }else{
      cout<<"number is not a power of two"<<endl;
   }
   return 0;
}