#include <iostream>
using namespace std;
void reachhome(int src, int dest){
   cout<<" source "<<src<<endl;
   // base case 
   if( src == dest ){
      cout <<" reached home "<<endl;
      return ;
   }
   src++;
   //recursive relation
   reachhome(src,dest);
}
int main ()
{
   int src=1;
   int dest =10;

   reachhome(src,dest);
   
   return 0;
}