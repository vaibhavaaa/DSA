#include<iostream>
using namespace std;
void merge(int *arr, int s, int e){
   int mid = s + (e - s) / 2;
   int l1 = mid-s+1;
   int l2 = e-mid;

   int *first= new int[l1];
   int *second= new int[l2];
   
   int start =s;
   for(int i=0;i<l1;i++){
      first[i]=arr[start++];
   }
   for(int i=0;i<l2;i++){
      second[i]=arr[start++];
   }
   int index1=0;
   int index2=0;
   int mainindex=s;
   while(index1<l1 && index2<l2){
      if(first[index1]<second[index2])
      {
         arr[mainindex++]=first[index1++];
      }else{
         arr[mainindex++]=second[index2++];
      }

   }
   while(index1<l1){
      arr[mainindex++]=first[index1++];
   }
   while(index2<l2)
   {
      arr[mainindex++]=second[index2++];
   }
   delete[] first;
   delete[] second;

 }

void mergesort(int *arr, int s, int e)
{
   if(s>=e){
      return;
   }

   int mid = s +(e-s)/2;
   mergesort(arr,s,mid);
   mergesort(arr,mid+1,e);
   merge(arr,s,e);

}
int main ()
{
   int array[7] = { 1, 8, 3, 4 ,2,9,5};
   int s=0;
   int e=6;
   mergesort(array, s,e);
   for(int i=0;i<=6;i++){
      cout<<array[i]<<" ";
   }

}

