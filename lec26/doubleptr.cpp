#include <iostream>
using namespace std;
int update(int *p){
   // p=p+1;
   //lets check if something changes;
   *p = *p +1;
   //lets check if something changes;
   


}
int main ()
{
   int i=5;
   int *p =&i;
   int **p2 = &p;

   cout<<" before "<<endl;
   cout<<i<<endl;
   cout<<*p<<endl;
   cout<<**p2<<endl;
   update(p);
   cout<<" after "<<endl;
   cout<<i<<endl;
   cout<<*p<<endl;
   cout<<**p2<<endl;
   cout<<sizeof(int)<<endl;
   return 0;
}