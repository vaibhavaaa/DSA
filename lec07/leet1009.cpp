#include <iostream>
using namespace std;
class Solution {
public:
    int bitwiseComplement(int n) {
        int m=n;
        int mask =0;
        if (m==0){
            return 1;
        }
        while(m!=0){
            mask = (mask<<1)|1;
            m=m>>1;
        }
        int ans = (~n) & mask;
        return ans;
        }
        
};
int main ()
{
   Solution solution;
   int ans= solution.bitwiseComplement(3);
   cout<<ans;
   return 0;
   
   return 0;
}