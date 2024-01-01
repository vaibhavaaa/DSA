/*
searching an element in rotated array ;
we'll use concept of pivot element;
*/
#include <iostream>
using namespace std;
int binarysearch(int arr[], int start, int n , int key){
   int s = start;
   int e = n   ;
   int ans =-1;
   while(s <=e){
      int mid = s + (e-s)/2;
      if(arr[mid]==key){
         ans = mid;
         break;
      }else if (arr[mid]> key){
         e = mid -1;
      }else{
         s= mid +1;
      }
   }
   return ans;

} 
int pivotelmnt(int arr[], int n){
   int start =0;
   int end = n-1;
   while(start < end){
      int mid = start + (end - start)/2;
      if(arr[0]<= arr[mid] ){
         start = mid +1;
      }else{
         end = mid;
      }
   }
   return start;
}
int searchelemnt(int arr[], int n, int key){
   int start =0;
   int end =n-1;
   int pivot=pivotelmnt(arr,n);
   int ans =-1;
   int firstend=n-1;
   while(start <= end ){
      int mid = start + (end-start)/2;
      if(arr[pivot]<= key && key <= arr[end]){
         ans = binarysearch(arr,pivot,n-1,key);
         break;
      }
      else {
         firstend = pivot-1;
         ans = binarysearch(arr,start,firstend,key); 
         break;      
      }
   }
   return ans ;
}

int main ()
{
   int arr[5]= { 7,9,1,2,3};
   int size = 5;
   int key =2;
   int sol=searchelemnt(arr, size, key);
   cout<<sol<< endl;
   return 0;
}