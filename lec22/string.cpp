#include <iostream>
using namespace std;
int reverse(char array[], int n){
   int start = 0;
   int end = n-1;
   while(start < end){
      swap(array[start], array[end]);
      start++;
      end--;
   }

}
int main ()
{
   char array[20];
   cin>>array;
   reverse(array , 7);
   cout<<array<<endl;

   
   return 0;
   
}