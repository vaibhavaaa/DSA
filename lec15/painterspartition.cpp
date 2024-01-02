/*
painter's partion problem
find a answer where every board is painted ,and  
assume there are two painters 
answer should be such a allocation where it is taking minimum 
time for a painter to paint maximum number of boards 
list of array contains value of length of boards , and 
each board  takes unit time for getting painted;
*/
#include <iostream>
using namespace std;
bool ifpossible(int arr[], int n, int k,int mid){
   int lengthsum=0;
   int paintercount =1;
   for (int i=0;i<n;i++){
      if(lengthsum + arr[i]<= mid){
         lengthsum = lengthsum + arr[i];
      }
      else{
         paintercount++;
         if(paintercount > k || arr[i]> mid ){
            return false;
         }
         lengthsum = arr[i];
      }
   }
   return true;
}
int painterprbm(int arr[],int n , int k){
   int start =0;
   int sum =0;
   int ans =-1;
   for (int i=0; i< n;i++){
      sum=sum+arr[i];
   }
   int end = sum;
   int mid = start + (end -start)/2;
   while(start <= end){
      if(ifpossible(arr,n,k,mid)){
         ans = mid ;
         end = mid -1;
      }
      else{
         start = mid +1;
      }
   mid = start + (end -start)/2;
   }
return ans;
}
int main ()
{
   int arr[4] = {5,5,5,5};
   int k = 2; //number of painters;
   int n = 4; //numbers of boards;
   int soln = painterprbm(arr,n,k);
   cout<<soln<<endl;
   return 0;
}