#include <iostream>
#include<vector>
using namespace std;
class Solution {
public:
     vector<int> findDuplicates(vector<int>& nums) {
         vector<int> soln;
         
        for(int i=0;i<nums.size();i++){
            int index =abs(nums[i])-1;

            if(nums[index]<0){
               soln.push_back(index+1);
            }else{
               nums[index]=-nums[index];
            }

        }
        
        return soln ;
        
    }
};
int main ()
{
   Solution solution;
   vector<int> numbers = {6,1,4,5,4,6,7,1,4};
   vector<int>  ans =solution.findDuplicates(numbers);
   
    // Loop through the vector and print each element
    for (int i : ans) {
        cout << i << " ";
    }

   
   return 0;
}
/*
Given an integer array nums of length n 
where all the integers of nums are in 
the range [1, n] and each integer appears once or twice,
return an array of all the integers that appears twice.
*/
// Input: nums = [4,3,2,7,8,2,3,1]
// Output: [2,3]