#include <iostream>
using namespace std;

int main() {
    int am;
    cout << "Enter the amount: ";
    cin >> am;

    int arr[4] = {100, 50, 20, 1};

    int i = 0;
    while (am > 0 && i< 4) {
      
        int ch = i;

        switch (ch) {
            case 0: {
                int count = am / 100;
                if(!count){

                }else{
                cout << count << " notes of 100" << endl;
                }
                am = am % 100;
                i++;
                break;
            }
            case 1: {
                int count1 = am / 50;
                cout << count1 << " notes of 50" << endl;
                am = am % 50;
                i++;
                break;
            }
            case 2: {
                int count2 = am / 20;
                cout << count2 << " notes of 20" << endl;
                am = am % 20;
                i++;
                break;
            }
            case 3: {
                int count3 = am / 1;
                cout << count3 << " notes of 1" << endl;
                am = am % 1;
                i++;
                break;
            }
            default:
                break;
        }
    }

    return 0;
}
