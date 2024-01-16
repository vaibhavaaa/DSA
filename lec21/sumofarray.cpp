#include <iostream>
#include<vector>
using namespace std;
vector<int> reverse(vector <int> abn){
   int start =0;
   int end = abn.size()-1;
   while(start <end){
      swap(abn[start++],abn[end--]);
   }
   return abn;

}
void print(vector <int> ans){
   for(int i : ans){
      cout<<i<<" ";
   }
   cout<<endl;
}
vector <int> sumarry(vector <int> arr1, vector<int> arr2){
   int i = arr1.size()-1;
   int j= arr2.size()-1;
   int carry =0;
   int sum =0;
   vector<int> ans;

   while(i>=0 && j>=0){
      int p = arr1[i];
      int q = arr2[j];
      sum = p+q +carry;
      ans.push_back(sum%10);
      carry= sum/10;
      i--;
      j--;
   }
   vector <int> soln = reverse(ans);
   return soln;
   
}
int main ()
{
   vector <int> q= {2,4,5};
   vector <int> p ={5,2,8};
   vector<int> ans = sumarry(p,q);
   print(ans);
   return 0;
}