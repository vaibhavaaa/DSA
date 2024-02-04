#include <iostream>
using namespace std;

void reversstr(string &word, int start, int end) {
//pass by reference so that no copy is made
    // base case
    if(start >= end) {
        return;
    }

    // swap characters at start and end positions
    swap(word[start], word[end]);

    // recursive relation
    reversstr(word, start + 1, end - 1);
}

int main() {
    string word = "vaibhav";
    int start = 0;
    int end = word.length() - 1;
    reversstr(word, start, end);

    cout << "Reversed String: " << word << endl;

    return 0;
}
