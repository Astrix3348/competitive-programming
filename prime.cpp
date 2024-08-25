#include<iostream>
using namespace std;

int main(){
	int n;
	cin >> n;
	if(n%2==0){
		cout << n/2 << endl;
		for(int i=0; i<n/2; i++){
			cout << '2' << " ";
		}
	}
	else{
		int RES = n-3;
		cout << RES/2+1 << endl;
		for(int i=0; i<RES/2; i++){
			cout << '2' << " ";
		}
		cout << '3';
	}
	

	return 0;
}