#include<iostream>
#include<algorithm>  // for sort()
using namespace std;

int main() {
    string str;
    cout << "Enter a string: ";
    cin >> str;

    // Sorting the string
    sort(str.begin(), str.end());

    cout << "Sorted string: " << str << endl;
    
    return 0;
}

