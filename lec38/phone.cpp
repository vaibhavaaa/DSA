#include<bits/stdc++.h>
using namespace std;
void solve(string num, string output,int index,string mapping[],vector<string>&ans)
{
   // base case
   if(index>=num.length())
   {
      ans.push_back(output);
      output.pop_back();
      return;

   }
   int element= num[index]-'0';
   string value = mapping[element];

   for(int i=0;i<value.length();i++)
   {
      output.push_back(value[i]);
      solve(num,output,index+1,mapping,ans);
      output.pop_back();
     
   }
   
}
int main()
{
   string mapping[]={"" ,"","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
   int index=0;
   vector<string>ans;
   string output = "";
   string num="24";
   solve(num,output,index,mapping,ans);

   for(string a:ans){
      cout<<a<<" ";
      cout<<endl;
   }

}