#include<iostream>
#include<string.h>
using namespace std;

int main(){
	int n, t=0;
	string s;
	cin >> n;
	while(n--){
		cin >> s;
		if(s=="X++" || s=="++X"){
			t++;
		}
		else{
			t--;
		}
	}
	cout << t << endl;
	return 0;
}