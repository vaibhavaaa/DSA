#include <iostream>
using namespace std;
void reverse(int arr[],int n){
   for(int i=0;i<n/2;i++){
      swap(arr[i],arr[n-i-1]);
   }
}
int main ()
{
   int arr[5]={ 1,2,4,5,5};
   int size = 5;
   reverse(arr,size);
   for(int i=0;i<size;i++){
      cout<<arr[i]<<" ";
   }
   
   return 0;
}