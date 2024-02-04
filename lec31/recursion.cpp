#include <iostream>
using namespace std;
int factorial(int n){
   // base case
   if (n ==0){
      return 1;
   }
   int chotiprblm = factorial (n-1);
   int badiprblm = n * chotiprblm;

   return badiprblm;
}
int main ()
{
   int n=4;
   int ans = factorial(n);
   cout<<" the factorial of "<<n<<" is "<<ans<<endl;
   return 0;
}