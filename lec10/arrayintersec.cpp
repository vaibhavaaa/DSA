#include <iostream>
#include <bits/stdc++.h>
using namespace std; 
vector<int> findArrayIntersection(vector<int> &arr1, int n, vector<int> &arr2, int m)
{
	
	vector<int> soln;
	int i=0,j=0;
	while(i<n && j<m){
		if (arr1[i]==arr2[j]){
			soln.push_back(arr1[i]);
			i++;
			j++;
			
		}
		else if( arr1[i] < arr2[j]){
			i++;
		}
		else{
			j++;
		}
	}
	return soln;

}
int main ()
{
   vector <int> arr1={1,2,3,4,4,7,8};
   int size1= arr1.size();
   vector <int> arr2={4,5,6,7};
   int size2=arr2.size();
   vector <int >sol = findArrayIntersection( arr1,  size1, arr2,  size2);
   
   for(int i: sol){
      cout<<i<<" ";
   }
   cout<<endl;
   
   return 0;
}