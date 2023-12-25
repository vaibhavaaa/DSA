#include <iostream>
using namespace std;
int main ()
{
   char c;
   cout<<"enter a character :"<<endl;
   cin>>c;
   if(c>='a' and c<='z'){
      cout<<"char is lower alphabet ";
   }
   else if(c >= 'A' and c<= 'Z'){
      cout<<"char is upper alphabet ";
   }
   else if(c >='0' and c<= '9' ){
      cout<<"char is a number";
   }
   return 0;
}