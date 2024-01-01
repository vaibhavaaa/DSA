/*
finding pivot in an array just means to graph 
the elements with respect to index and 
returning the lowest element ;
*/
#include <iostream>
using namespace std;
int pivotelmnt(int arr[], int n){
   int start= 0;
   int end = n-1;
   while(start < end){
      int mid = start + (end -start)/2;
      if(arr[mid]>=arr[0]){
         start = mid+1;
      }else{
         end = mid;
      }
   }
   return start;
}
int main ()
{
   int arr[9]={8,9,1,3,5,6,8,8,8};
   int size = 9;
   int ans = pivotelmnt(arr,size);
   cout<<ans<<endl;
   
   return 0;
}