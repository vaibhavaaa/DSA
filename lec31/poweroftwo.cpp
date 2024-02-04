#include <iostream>
using namespace std;
int power(int n){
   //base case 
   if(n==0){
      return 1;
   }
   //recursive prelation
   int smallerproblme = power(n-1);

   return 2*smallerproblme;
}
int main ()
{
   int n;
   cin>>n;
   int ans = power(n);
   cout<<ans<<endl;
   return 0;
}