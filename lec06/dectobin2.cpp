#include <iostream>
#include <math.h>
using namespace std;
class Solution{
   public:
   int decitobin(int num){
      int ans=0;
      int i=0;
      while(num!=0){
         int bit = num & 1;
         ans = (bit * pow(10,i)) + ans;
         num=num>>1;
         i++;
      }
      return ans;
   }
};
int main ()
{
   Solution solution;
   int result = solution.decitobin(1);
   cout<< result;
   
   return 0;
}