#include <iostream>
#include <math.h>
using namespace std;
class Solution {
public:
    string decitobin(int num) {
        int ans = 0;
        int i = 0;
        string val ="";
        while (num != 0) {
            int bit = num & 1;
            // ans = (bit << i) | ans;
            val = (bit? "1":"0")+val;
            num = num >> 1;
            i++;
        }
       return val;
    }
};
int main ()
{
   Solution solution;
   string result = solution.decitobin(5);
   cout<< result;
   
   return 0;
}