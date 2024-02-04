#include <iostream>
using namespace std;
int climbstairs(int nstairs){
   //base case
   if(nstairs<0){
      return 0;
   }
   if(nstairs==0){
      return 1;
   }
   int ans = climbstairs(nstairs-1)+ climbstairs(nstairs -2);
   return ans;
}
int main ()
{
   int soln = climbstairs(5);

cout<<" number of steps to climb 5 stairs follows "<<soln<<endl;

   
   return 0;
}