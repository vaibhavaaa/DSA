#include <iostream>
using namespace std;
bool keybinarysearch(int array[], int s, int e,int key){
   //base case
   if(s>e){
      return  false;
   }
   int mid = s + (e-s)/2;
   
   // element found
   
   if(array[mid]==key){
      return true;
   }
   
   if (array[mid] > key){
      return keybinarysearch(array , s, mid-1,key);
   }else{
      return keybinarysearch(array, mid+1, e, key);
   }
   
}
int main ()
{
   int arr[5]={2,4,9,7,8};
   int size =5;
   int key =8;
   int start =0;
   int end =size-1;
   bool ans = keybinarysearch(arr,start,end,key);
   if(ans){
      cout<<" the number "<<key<<" is present "<<endl;
   }
   else{
      cout<<" the number "<<key<<" is not present "<<endl;
   }
   
   return 0;
}