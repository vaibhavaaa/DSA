#include <iostream>
using namespace std;
void reverse( string word, int length){
   // base case;
   if(length == 0){
      return;
   }
   char l = word[length-1] ;
   cout<<l;
   reverse(word, length-1);
}
int main ()
{
   string word = "vaibhav";
   reverse(word,7);
   
   return 0;
}