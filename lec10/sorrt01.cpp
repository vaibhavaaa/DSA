#include <iostream>
using namespace std;

void printout(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void sortout(int arr[], int n) {
    int count0 = 0;
    int count1 = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] == 0) {
            count0++;
        } else{
            count1++;
        } 
    }

    int i = 0;

    // Sort 0s
    while (count0 > 0) {
        arr[i++] = 0;
        count0--;
    }

    // Sort 1s
    while (count1 > 0) {
        arr[i++] = 1;
        count1--;
    }
}


int main ()
{
   int arr[8]={0,1,0,1,0,0,1,1};
   int size=8;
   sortout(arr,size);
   printout(arr,size);
   return 0;
}