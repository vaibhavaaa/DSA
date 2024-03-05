#include <iostream>
using namespace std;
int Partion(int arr[],int s, int e){
   int pivot = arr[s];
   int cnt=0;
   for(int i=s+1;i<=e;i++){
         if(arr[i]<= pivot)
         {
            cnt++;         
         }
   }
   int pivotindex = s +cnt;
   swap(arr[pivotindex],arr[s]);
   
   int i=s,j=e;
   while(i<=pivotindex && j>=pivotindex){
      
   while(arr[i]<arr[pivotindex]){
      i++;
   }
   while(arr[j]>arr[pivotindex]){
      j--;
   }
   if(i<=pivotindex && j>=pivotindex){
      swap(arr[i],arr[j]);
   }
   
   }
   return pivotindex;
}
void quicksort(int arr[],int s,int e){
   //base case
   if (s>=e){
      return;
   }
   // Partion
   int p = Partion(arr,s,e);
   // recursion
   quicksort(arr,s,p-1);
   quicksort(arr,p+1,e);

}
int main ()
{
   int arr[5]= { 1,9,40,30,3};
   int start=0;
   int end = 4;
   
   quicksort(arr,start,end);
   for (int i = 0; i < 5; i++) {
    cout << arr[i] << " ";
}
   
   return 0;
}