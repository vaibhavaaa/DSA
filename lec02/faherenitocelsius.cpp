#include <iostream>
using namespace std;
int main ()
{
   double fahereneit,celsius;
   cout<<"enter temp in fahereneit : ";
   cin>>fahereneit;
   celsius=(5.0/9.0)*(fahereneit-32.0);
   cout<<celsius<<" degree";
   return 0;
}