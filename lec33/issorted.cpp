#include <iostream>
using namespace std;
bool issorted (int array[], int size){
   // base case
   if(size == 0 ||size == 1 ){
      return true;
   }
   if(array[0]>array[1]){
      return false;
   }
   else {
      bool ans = issorted(array+1,size-1);
      return ans;
   }
}
int main ()
{
   int arr[5]={2,4,9,7,8};
   int size =5;
   bool ans = issorted(arr,size);
   if(ans){
      cout<<"the array is sorted "<<endl;
   }else{
      cout<<" the array is not sorted"<<endl;
   }
   
   return 0;
}