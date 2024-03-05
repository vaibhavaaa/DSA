#include <iostream>
using namespace std;
class Solution {
public:
    int reverse(int x) {
        long reversenum=0;
        int p=x;
        if(x<0){
            x=-x;
        }
        while(x>0){
            reversenum= (reversenum*10) +(x%10);
            x=x/10;

        }
        if(p<0){
            return -reversenum;
        }
        return reversenum;
    }
};
int main ()
{
   Solution solution;
   long ans= solution.reverse(457);
   cout<<ans;
   return 0;
   
  
}