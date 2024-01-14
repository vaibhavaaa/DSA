#include <iostream>
using namespace std;
void movezeroes(int arr[], int n){
   int index=0;
   for(int i=0 ;i<n;i++){
      if(arr[i]!=0){
         swap(arr[i],arr[index]);
         index++;
      }
   }

}
int main ()
{

   int arr[6]={1,0,3,5,0,9};
   movezeroes(arr,6);
   for(int i=0; i<6;i++){
      cout<<arr[i]<<" ";
   }

   return 0;
}