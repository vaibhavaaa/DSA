#include <iostream>
using namespace std;
int arrayinterse(int arr[], int arr2[], int size1, int size2){
   for(int i=0;i<size1;i++){
      int babu= arr[i];
      for(int j=0;j<size2;j++){
         if(babu == arr2[j]){
            int min;
            arr2[j]=min;
            return babu;
         }
      }

   }
}
int main ()
{
   int arr1[5]={1,2,3,7,8};
   int size1=5;
   int arr2[4]={4,5,6,7};
   int size2=4;
   int sol = arrayinterse( arr1, arr2,  size1,  size2);
   cout<<sol;
   
   return 0;
}