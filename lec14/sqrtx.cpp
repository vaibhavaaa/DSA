/*
finding squareroot of x keeping time complexity o(logn);
*/
#include <iostream>
using namespace std;
long long int sqrt(int n){
   int start =0;
   int end =n-1;
   long long int ans =-1;
   while(start <= end ){
      long long int mid = start +(end - start)/2;
      long long square = mid*mid;
      if(square ==n){
         ans = mid;
         return ans; 
      }
      else if (square > n){
         end = mid-1;
      }else{
         ans = mid;
         start = mid +1;
      }
   }
  return ans;
}
int main ()
{
   int root = sqrt(49);
   cout<<root;
   return 0;
}