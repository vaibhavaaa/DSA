#include <iostream>
using namespace std;
int main ()
{
   int arr[20]={10,20,30,40};
   char ch[6] ="abcde";
   cout<<ch<<endl;
   
   int *pr = arr;
   cout<<*pr<<endl;
   char *c = &ch[0];
   char *d =ch;
   
   cout<<d<<endl;
   cout<<c<<endl;
   cout<<*c<<endl;
   
   return 0;
}