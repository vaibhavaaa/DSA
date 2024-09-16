#include <iostream>
using namespace std;

int & updaterfn( int n){
   int &ans = n;
   ans++;
   return ans;
}
void update2(int &n){
   n++;
}
void update(int n){
   n++;

}
int main ()
{
   int n =5;
   cout<<"before"<<endl;
   cout<<n<<endl;

   update2(n);

   cout<<"after"<<endl;
   cout<<n<<endl;

   int ans =updaterfn(n);
   cout<<ans<<endl;

   
   return 0;
}