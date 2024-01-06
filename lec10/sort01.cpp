#include <iostream>
#include <vector>
using namespace std;

void sortout(int nums[] , int n){
   int i=0;
   int j=n-1;
   while(i<j){
      while(nums[i]==0 && i<j){
         i++;
      }
      while(nums[j]==1&& i<j){
         j--;
      }
      if( i<j){
         swap(nums[i], nums[j]);
         i++;
         j--;
      }
   }
   
}

int main ()
{
   int arr[6]={ 0,1,0,0,1,1};
   int size = 6;
   sortout(arr,size); 
   for (int i=0; i<size;i++){
      cout<<arr[i]<<" ";
   }
   cout<<endl;
   return 0;
}