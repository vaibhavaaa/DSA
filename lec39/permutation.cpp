#include<bits/stdc++.h>
using namespace std;
void solve(string nums,int index, vector<string> &ans)
{
   // base case
   if(index>=nums.length())
   {
      ans.push_back(nums);
      return;
   }
   
   for(int i=index;i<nums.length();i++){
      swap(nums[index],nums[i]);
      solve(nums,index+1,ans);
      swap(nums[index],nums[i]);
   }
}

int main()
{
   vector<string> ans;
   string nums="abc";
   int index=0;
   solve(nums,index,ans);
   for(string i : ans){
      cout<<i<<" ";
      cout<<endl;
   }
}