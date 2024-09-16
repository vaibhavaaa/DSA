#include<iostream>
#include<vector>
using namespace std;
void solve(int index, string nums,string output,vector<string> &ans)
{
   // base case
   if(index>=nums.length())
   {
      ans.push_back(output);
      return;
   }

   // exclude
   solve(index+1,nums,output,ans);

   // include
   char element = nums[index];
   output.push_back(element);
   solve(index+1,nums,output,ans);
}
int main()
{
   vector<string> ans;
   string output="";
   int index=0;
   string nums="123";
   solve(index,nums,output, ans);
   int count = 0;
   for(string i : ans){
      cout<<i<<" ";
      cout<<endl;
      count++;
   }
   cout<<count;
}