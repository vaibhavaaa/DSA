/*
peak of mountain by binary approach;
*/
#include <iostream>
using namespace std;
int peakbinry(int arr[], int n ){
   int start =0;
   int end=n-1;
   int ans=-1;
   while( start<end){
      int mid = start +(end-start)/2;
      if(arr[mid]<arr[mid+1]){
         start =mid+1;
      }
      else if (arr[mid]> arr[mid+1]){
         end=mid;
      }
   }
   return start;
}
int main ()
{
   int arr[8]={ 1,4,5,6,3,2,1,0};
   int size= 8;
   int ans =peakbinry(arr, size);
   cout<<ans;
   return 0;
}