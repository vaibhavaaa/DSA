#include<iostream>
#include<vector>
using namespace std;
void solve(int index, string name, string output, vector<string>&ans)
{
   // base case
   if(index>=name.length())
   {
      ans.push_back(output);
      return;
   }
   // exclude
   solve(index+1,name,output,ans);

   // include
   char element = name[index];
   output.push_back(element);
   solve(index+1,name,output,ans);
}
int main()
{
   vector<string> ans;
   string name="abc";
   string output ="";
   int index =0;
   solve(index,name,output,ans); 

   for(string i : ans){
      cout<<i<< " ";
      cout<<endl;
   }

}