#include <iostream>
using namespace std;
void arthmaticprog(int n){
   int d =3;
   int a =7;
   cout<< a + (n*d);
}
int main ()
{
   // arthmatic progression of general term 7+3n;
   int n;
   cout<<"enter n ";
   cin>>n;
   arthmaticprog(n);
   return 0;
}