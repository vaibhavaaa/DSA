#include <iostream>
using namespace std;
int main ()
{
   int arr[20]= {10,20,30,30};
   int i =3;
   int *ptr = &arr[0];
   cout<<i[arr]<<endl;
   cout<<*(arr+i)<<endl;
   cout<<sizeof(arr)<<endl;
   cout<<sizeof(ptr)<<endl;
   cout<<sizeof(*ptr)<<endl;
   cout<<arr<<endl;
   cout<<ptr<<endl;
   cout<<&ptr<<endl;

   return 0;
}