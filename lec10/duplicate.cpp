/*
Given an integer array nums of length n 
where all the integers of nums are in 
the range [1, n] and each integer appears once or twice,
return duplicate integer.
*/
#include <iostream>
#include<vector>
using namespace std;
class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int ans=0;
        for (int i=0;i<nums.size();i++){
            ans= ans^nums[i];
        }
        for (int i=1;i<nums.size();i++){
            ans= ans^i;
        }
        return ans ;
        
    }
};
int main ()
{
   Solution solution;
   vector<int> numbers = {6,1,2,4,5,3,6};
   int ans =solution.findDuplicate(numbers);
   cout<<ans;
   
   return 0;
}