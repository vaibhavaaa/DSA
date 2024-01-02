#include <iostream>
using namespace std;
int ifpossible(int arr[], int n, int k, int mid){
   int cowcount=1;
   int lastpos=arr[0];
   for(int i=0;i<n;i++)
   {
      if(arr[i] -lastpos >=mid){
         cowcount++;
         if(cowcount == k){
            return true;
         }
         lastpos=arr[i];
      }
   }
return false;
}
int aggresivecow(int arr[], int n , int k){
   // search space
   int start = 0;
   int maxi = -1;
   int ans =-1;
   for(int i =0; i<n;i++){
      maxi = max( maxi ,arr[i]);
   }
   int end = maxi;
   int mid = start + (end - start )/2;
   while(start <= end){
      if(ifpossible(arr,n,k,mid)){
         ans = mid;
         start = mid+1;
      }
      else{
         end = mid -1;
      }
   mid = start + (end - start )/2;
   }
return ans ;

};
int main ()
{
   int arr[6] ={1,2,3,4,5,6};
   int n = 6;
   int k = 2;
   int soln = aggresivecow(arr,n, k);
   cout<<soln<<endl;
   return 0;
}