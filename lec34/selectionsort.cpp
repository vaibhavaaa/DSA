#include <iostream>
using namespace std;
void selectionsort(int arr[], int size){
   // base case
   if(size==0|| size==1){
      return;
   }
   for(int i =0; i< size; i++){
      int minindex= i;
      for(int j =i+1; j<size;j++){
         if (arr[minindex]>arr[j]){
            minindex=j;
         }
      }
      swap(arr[minindex],arr[i]);
   }
   // recursive call
   selectionsort(arr+1,size-1);
}
int main ()
{
   int arr[5]={2,4,5,8,0};
   
   selectionsort(arr,5);
   for(int i=0;i<5;i++){
      cout<<arr[i]<<" ";
   }
   
   
   return 0;
}