#include<iostream>
using namespace std;

int main(){
	int a,b;
	cin >> a >> b;
	int mini = min(a,b);
	int temp=1;
	for(int i=0; i<mini; i++){
		temp = temp*(mini-i);
	}
	cout << temp << endl;

	return 0;
}