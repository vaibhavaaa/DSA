#include <iostream>
using namespace std;
int sum_recursive(int array[],int size){
   // base case 
   if(size == 0){
      return 0;
   }
   int ans = array[0]+sum_recursive(array+1, size-1);
   return ans ;
}
int main ()
{
   int arr[5]={5,2};
   int size =5;
   int sum = sum_recursive(arr,size); 
   cout<<"the sum of elements is "<<sum<<endl;
   
   return 0;
}