#include <iostream>
using namespace std;

void saydigits(int num, string array[]){
   // base case
   if (num==0){
    return ;
   }

// 432
   int digit =num%10;
   num=num/10;
  
   // recursive relation
   saydigits(num,array);
    cout<<array[digit]<<" ";
    
}
int main ()
{
   string array[10]={"zero","one","two","three","four","five","six","seven","eight","nine"};
   saydigits(7657,array);
   
   
   return 0;
}