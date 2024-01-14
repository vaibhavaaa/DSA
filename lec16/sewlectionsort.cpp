#include <iostream>
using namespace std;
int selectionsort(int arr[], int n){
   for(int i =0;i<n;i++){
      int minindex= i;
      for(int j =i+1;j<n;j++){
         if(arr[minindex]>arr[j]){
            minindex = j;
         }
      }
      swap(arr[minindex], arr[i]);
   }
}
int main ()
{
   int arr[5]= { 1,3, 4, 7,2};
   int n =5;
   selectionsort(arr,n);
   for(int i =0;i<n;i++){
      cout<<arr[i]<<endl;
   }
   
   return 0;
}