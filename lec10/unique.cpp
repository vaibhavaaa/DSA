#include <iostream>
using namespace std;
int findUnique(int *arr, int size)
{
//    xor 0^a=a , a^a=0;
    int ans=0;
    for(int i=0;i<size;i++){
        ans = (ans^arr[i]);
    }
    return ans;
}
int main ()
{
   int arr[9] ={1,3,1,3,6,6,7,10,7};
   int size =9;
   int ans =findUnique(arr,size);
   cout<<"the unique element is "<<ans;
   
   return 0;
}