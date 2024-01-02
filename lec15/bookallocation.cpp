/*
book alloctaion problem
*/
#include <iostream>
using namespace std;
bool ispossible(int bookspages[],int books,int students,int mid){
   int pagesum =0;
   int studentcount =1;
   for(int i=0; i<books;i++){
      if(pagesum + bookspages[i]<= mid){
         pagesum = pagesum+bookspages[i];
      }
      else {
         studentcount++;
         if(studentcount>students || bookspages[i]>mid){
            return false;
         }
         pagesum=bookspages[i];
      }
   }
   return true; 
}
int miniofmaxbooksalloted(int bookspages[],int books, int students){
   int  start = 0;
   int sum =0;
   int ans =-1;
   for(int i=0;i<books;i++){
      sum = sum + bookspages[i];
   }
   int end = sum;

   int mid = start + (end - start)/2;
   while(start<=end)
   {
      if(ispossible(bookspages,books,students,mid)){
         ans = mid;
         end = mid-1;
      }
      else{
         start = mid +1;
      }
      mid = start + (end - start)/2;
   }
   return ans;
}
   
int main ()
{
   int bookspages[4]={10,20,30,40};
   int books=4;
   int students = 2; 
   int ans = miniofmaxbooksalloted(bookspages,books, students);
   cout<<ans<<endl;
   
   return 0;
}