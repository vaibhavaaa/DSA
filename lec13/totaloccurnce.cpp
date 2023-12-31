/*
count total number of occurance of elemnt in sorted array;
*/
#include <iostream>
using namespace std;
int firstocc(int arr[], int n, int key){
   int left =0;
   int right = n-1;
   int ans =-1;
   while(left<=right){
      int mid = left +(right -left)/2;
      if(arr[mid]==key){
         ans =mid;
         right=mid-1;
      }else if(arr[mid]>key){
         right=mid-1;

      }else{
         left =mid+1;
      }
   }
   return ans;
}
int lastocc(int arr[],int n , int key){
   int start =0;
   int end= n-1;
   int ans=-1;
   while(start<=end){
      int mid = start +(end-start)/2;
      if(arr[mid]==key){
         ans=mid;
         start=mid+1;
      }
      else if(arr[mid]>key){
         end=mid-1;
      }else{
         start =mid+1;
      }
   }
   return ans;

}
int totaloccurance(int arr[], int n , int k){
   int p =firstocc(arr,n,k);
   int q= lastocc(arr,n,k);
   int sol=(q-p)+1;
   return sol;
}
int main ()
{
   int arr[9]={1,3,5,6,8,8,8,8,9};
   int size = 9;
   int key = 8;
   int ans = totaloccurance(arr,size,key);
   cout<<ans<<endl;
   
   return 0;
}