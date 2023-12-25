#include <iostream>
using namespace std;
int main ()
{
   int n;
   cout<<"enter a number upto which only even numbers are to be added :"<<endl;
   cin>>n;
   int i=2;
   int sum =0;
   while(i<=n){
      sum=sum+i;
      i+=2;
   }
   cout<<sum;
   return 0;
}