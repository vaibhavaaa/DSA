#include <iostream>
using namespace std;
bool palindrome(string word, int start, int end){
   // base case
   if(start>end){
      return true;
   }
   if(word[start]!=word[end]){
      return false;
   }  
   else {
      return palindrome(word,start+1,end-1);  
   }

}
int main ()
{
   string word= "qbcdcbq";
   int start=0;
   int end = word.length()-1;
   bool ans = palindrome(word,start,end);
   
   cout<<"is the word given a palindrome ->"<<boolalpha<<ans<<endl;
   
   return 0;
}