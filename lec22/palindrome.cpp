#include <iostream>
using namespace std;
bool palindrome(char array[], int n){
   int st =0;
   int end = n-1;
   while(st<end){
      if(array[st]!=array[end]){
         return 0;
      }else{
         st++;
         end--;
      }
   }
   return 1;
}
int main ()
{
   char array[20];
   cin>>array;
   bool ans = palindrome(array , 7);
   cout<<ans<<endl;
   
   return 0;
}