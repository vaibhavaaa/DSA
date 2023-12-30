#include <iostream>
using namespace std;
void reverse(int arr[], int n){
   int a;
   
   for (int i=0;i<n/2;i++){
      swap(arr[i], arr[n-i-1]);
   }
   for(int i=0;i<n;i++){
      cout<<arr[i];
   }
}
int main ()
{
   int arr[5]= {1,4,5,7,9};
   reverse (arr,5);
   
   return 0;
}