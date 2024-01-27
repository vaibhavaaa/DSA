#include <iostream>
using namespace std;
int main ()
{
   int n;
   cin>>n;
   // creating a 2D array  from heap memory
   // creating a 2d array at run time
   int ** arr = new int*[n];

   for(int i=0; i<n;i++){
         arr[i] = new int[n];
   }

   // created a 2d array

   // taking input

   for(int i=0; i<n;i++){
      for(int j=0; j<n;j++){
         cin>>arr[i][j];
      }
   }
   // taking output
   cout<<endl;
   for(int i=0; i<n;i++){
      for(int j=0; j<n;j++){
         cout<<arr[i][j]<<" ";
      }cout<<endl;
   }

    //deleting allotted space
   for(int i =0;i<n;i++){
      delete [] arr[i];
   }
   delete []arr;

   return 0;
}