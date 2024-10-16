#include<iostream>
#include<string>
#include<algorithm>  // for sort()
using namespace std;

int main() {
    string str1;
    cout << "Enter a string: ";
    cin >> str1;

    // Sorting the string
    sort(str1.begin(), str1.end());

    cout << "Sorted string: " << str1 << endl;
    
     string str2;
    cout << "Enter a string: ";
    cin >> str2;

    // Sorting the string
    sort(str2.begin(), str2.end());

    cout << "Sorted string: " << str2 << endl;
    
    if(str1==str2){
        cout<<"valid anagram";
    }else{
         cout<<"not valid anagram";
    }
    
    return 0;
}

