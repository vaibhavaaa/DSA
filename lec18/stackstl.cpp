#include <iostream>
#include <stack>

using namespace std;
int main ()
{
   stack <string> s;
   s.push("vaibhav");
   s.push("kannoji");
   cout<<"Top elememt -> "<<s.top()<<endl;
   s.pop();
   cout<<"top elemnet ->"<<s.top()<<endl;
   cout<<" size of stack->"<<s.size()<<endl;

   
   return 0;
}