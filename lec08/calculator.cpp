#include <iostream>
using namespace std;
int main ()
{
   int a,b;
   cout<<"a: ";
   cin>>a;
   cout<<"b: ";
   cin>>b;
   cout<<endl;
   char ch;
   cin>>ch;
   switch ( ch){
      case '+': cout << a+b;
      break;
      case '-': cout<< a-b;
      break;
      case '*': cout<<a*b;
      break;
      case '/': cout<<a/b;
      break;      
   }
   return 0;
}