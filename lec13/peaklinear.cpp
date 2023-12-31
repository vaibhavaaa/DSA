/*
Finding peak element in array using complexity o(n);
*/
#include <iostream>
using namespace std;
int peakelem(int arr[],int size){
   int i=0, count =0;
   while(arr[i]<=arr[i+1]){
      count++;
      i++;
   }
   return count;
}
int main ()
{
   int arr[8]={ 1,4,5,6,3,2,1,0};
   int size= 8;
   int ans =peakelem(arr, size);
   cout<<ans;
   return 0;
}