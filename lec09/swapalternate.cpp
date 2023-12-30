#include <iostream>
using namespace std;
void swapaltn(int arr[] , int n){
   for(int i=0;i<n-1;i=i+2)
   {
      if(i+1<n){
         swap(arr[i],arr[i+1]);
      }
   }
   for(int i=0;i<n;i++)
   {
      cout<<arr[i];  
   }
}
int main ()
{
   int arr[6]={1,3,4,6,8,3};
   swapaltn(arr,6);
   
   return 0;
}