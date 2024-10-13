#include<iostream>
using namespace std;
int main(){
	char arr[6] = {'g','o','u','r','a','v'};
	cout<<"this is your normal char array => ";
	for(int i=0;i<6;i++){
		cout<<arr[i];
	}
	cout<<endl;
	cout<<"this is your reverse array => ";
	for(int i=6-1;i>=0;i--){
		cout<<arr[i];
	}
}
