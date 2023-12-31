#include <iostream>
using namespace std;
int binarysearch(int arr[], int n,int key){
   int start=0;
   int end =n-1;
   int mid =start +(end-start)/2;
   while(start<=end){
      if(arr[mid]==key){
         return mid;
      }
      else if(arr[mid]>key){
         end=mid-1;
      }
      else{
         start=mid+1;
      }
   mid =start +(end-start)/2;
   }
   return -1;
}
int main ()
{
   int arr[5]={1,3,5,6,8};
   int size = 5;
   int key = 3;
   int ans = binarysearch(arr,size,key);
   cout<<ans;
   
   return 0;
}