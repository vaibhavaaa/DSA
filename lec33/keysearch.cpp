#include <iostream>
using namespace std;
bool keysearch(int array[], int size , int key){
   // base case
   if(size == 0){
      return false;
   }
   //recursive relation
   if(array[0]==key){
      return true;
   }else{
      bool ans = keysearch(array+1,size-1,key);
      return ans;
   }
}

int main ()
{
   int arr[5]={2,4,9,7,8};
   int size =5;
   int key =17;
   bool ans = keysearch(arr,size,key);
   if(ans){
      cout<<" the number "<<key<<" is present "<<endl;
   }
   else{
      cout<<" the number "<<key<<" is not present "<<endl;
   }
   return 0;
}