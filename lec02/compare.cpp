#include <iostream>
using namespace std;
int main ()
{
   int a,b;
   int ans;
   cout<<"enter value of num a :"<<endl;
   cin>>a;
   cout<<"enter value of num b :"<<endl;
   cin>>b;
   ans =(a>b)?a:b;
   cout<<"the larger number is "<< ans;
   return 0;
}