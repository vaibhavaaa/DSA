/*
book allocation problem
*/
#include <iostream>
using namespace std;
bool ispossible(int arr[], int n , int m , int mid){
   int studentcount=1;
   int pagesum =0;
   for(int i =0; i<n;i++){
      if(pagesum + arr[i] <= mid){
         pagesum= pagesum+arr[i];
      }else{
         studentcount++;
         if(studentcount> m || arr[i]> mid){
               return false;
         }
      }
   }
return true;
}
int bookallocationsoln(int arr[], int n, int m){
   // n is number of books, m = numbers of students;
   int sum =0;
   int start =0;
   int ans=-1;
   for(int i=0;i<n;i++){
      sum= sum+ arr[i];
   }
   int end =sum;
   int mid = start + (end - start)/2;
   
   while(start<=end){

      if(ispossible(arr,n,m,mid)){
         ans = mid;
         end = mid-1;
      }else{
         start = mid +1;
      }
   mid = start + (end - start)/2; 
   }
return ans;
}
int main ()
{
   int arr[4]= {10,20,30,40};
   int m = 2;
   int n =4;
   int ans = bookallocationsoln(arr,n,m);
   cout<<ans<<endl;
   return 0;
}