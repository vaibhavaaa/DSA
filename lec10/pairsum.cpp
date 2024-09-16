#include <iostream>
#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> pairSum(vector<int> &arr, int s){
   vector<vector<int> > ans;
   for(int i=0;i<=arr.size();i++){
      int alo=arr[i];
      for(int j=i+1;j<=arr.size();j++){
         if(alo+arr[j]==s){
            vector<int> temp;
            temp.push_back(min(alo,arr[j]));
            temp.push_back(max(alo,arr[j]));
            ans.push_back(temp);
         }
      }
   }
    sort(ans.begin(), ans.end());
   return ans;
}
int main ()
{
   vector<int> arr1={4,1,2,9,5,8,0};
   int sum = 9;
   vector<vector<int>> soln = pairSum(arr1, sum);
   
  // Loop through the vector of vectors and print each element
   for (vector<int> v : soln) {
      for (int i : v) {
        cout << i << " ";
      }
    cout << endl;
   }

   return 0;
}