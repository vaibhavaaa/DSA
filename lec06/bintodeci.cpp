/*
1101 -> 13;
*/
#include <iostream>
#include <math.h>
using namespace std;
class Solution{
   public:
   int bintodeci(int binr){
      int i=0,ans=0;
      while(binr!=0){
         if(binr % 10==1){
            ans= ans + pow(2,i);      
         }
         binr = binr/10;
         i++;
      }
      return ans;
   }

};

int main ()
{
   Solution solution;
   int result = solution.bintodeci(1101);
   cout<< result;
   
   return 0;
}