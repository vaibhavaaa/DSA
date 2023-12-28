#include <iostream>
#include<math.h>
using namespace std;
class Solution {
public:
    bool isPowerOfTwo(int n) {
        for (int i=0;i<=30;i++){
            if (n == pow(2,i)){
                return true;
            }
        }
        return false;
        
    }
};
int main ()
{
   Solution solution;
   bool ans= solution.isPowerOfTwo(64);
   cout<<ans;
   return 0;
   
   
}