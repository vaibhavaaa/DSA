/*
find the first and last occurence of an element in an array
*/
#include <iostream>
using namespace std;
int firtocc(int arr[], int n, int key){
   int s=0;
   int e=n-1;
   int ans=-1;
   int mid =s+(e-s)/2;
   while(s<=e){
      
      if(arr[mid]==key){
         ans=mid;
         e=mid-1;  
      }else if(arr[mid]>key){
         e=mid-1;
      }else{
         s=mid+1;
      }
      mid=s+(e-s)/2;
   }
   return ans;
}
int lastocc(int arr[], int n, int key){
   int s=0;
   int e=n-1;
   int ans;
   while(s<=e){
      int mid =s+(e-s)/2;
      if(arr[mid]==key){
         ans=mid;
         s=mid+1;  
      }else if(arr[mid]>key){
         e=mid-1;
      }else{
         s=mid+1;
      }
      mid=s+(e-s)/2;
   }
   return ans;
}
int main ()
{
   int arr[7]={1,3,5,6,8,8,9};
   int size = 7;
   int key = 8;
   int ans = firtocc(arr,size,key);
   int sol = lastocc(arr,size,key);
   cout<<firtocc(arr,size,key)<<endl;
   cout<<lastocc(arr,size,key)<<endl;
   
   return 0;
}