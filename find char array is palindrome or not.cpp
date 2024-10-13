#include<iostream>
using namespace std;

int main() {
    int i, j;
    char arr[6] = {'g','o','u','r','a','v'};
    
    cout << "This is your normal char array => ";
    for (i = 0; i < 6; i++) {
        cout << arr[i];
    }
    cout << endl;

    cout << "This is your reverse array => ";
    for (j = 6 - 1; j >= 0; j--) {
        cout << arr[j];
    }
    cout << endl;

    // Palindrome check
    bool isPalindrome = true;
    for (i = 0, j = 6 - 1; i < j; i++, j--) {
        if (arr[i] != arr[j]) {
            isPalindrome = false;
            break;
        }
    }

    if (isPalindrome) {
        cout << "This is a palindrome" << endl;
    } else {
        cout << "This is not a palindrome" << endl;
    }

    return 0;
}

