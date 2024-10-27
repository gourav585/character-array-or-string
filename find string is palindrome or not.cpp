#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
void isp(string s){
    string rev =s;
    reverse(s.begin(),s.end());
    if(rev == s){
        cout<<"is a palindrome"<<endl;
    }else{
        cout<<"is not a palindrome"<<endl;
    }
}
int main(){
    string s = "abba";
    isp(s);
}
