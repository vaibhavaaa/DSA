#include <iostream>
using namespace std;
int merge(int *arr,int s, int e){
   int mid = (s+e)/2;
   int len1= mid-s+1;
   int len2= e-mid;
   
   int *first = new int[len1];
   int *second = new int[len2];

   // copy value;
   int mi=s;
   for(int i=0;i<len1;i++){
      first[i]=arr[mi++];
   }
   mi =mid+1;
   for(int i=0;i<len2;i++){
      second[i]=arr[mi++];
   }
   // merge 
   int index1=0;
   int index2 =0;
   int mainindex=s;
   while(index1 < len1 && index2 <len2){
      if(first[index1]<second[index2]){
         arr[mainindex++]=first[index1++];
      }
      else{
         arr[mainindex++]=second[index2++];
      }
      
   }
   while(index1<len1){
      arr[mainindex++]=first[index1++];
   }
    while(index2<len2){
      arr[mainindex++]=second[index2++];
   }
}
void mergesort(int *arr, int s, int e){
   //base case
   if(s>=e){
      return;
   }
   int mid = (s+e)/2;
   //left part sort krna hain
   mergesort(arr, s, mid);
   //right part
   mergesort(arr,mid+1,e);
   // merge
   merge(arr,s,e);
}
int main ()
{
   int arr[5]= { 1,3, 4, 7,2};
   int start=0;
   int end = 4;
   
   mergesort(arr,start,end);
   for (int i = 0; i < 5; i++) {
    cout << arr[i] << " ";
}

   
   
   
   return 0;
}