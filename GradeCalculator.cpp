#include<iostream>
using namespace std;
int main(){
	int n;
	cout << "enter a mark:";
	cin >> n;
	if(n>=90){
		cout << "A";
	} else if(n>=80 && n<=89){
		cout << "B";
	}
	else if(n>=70 && n<=79){
		cout << "C";
	}
	else if (n>=60 && n<=69){
		cout << "D";
	}
	return 0;
}
