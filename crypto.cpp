#include<iostream>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int p;
		cin >> p;
		if(p%2 == p%4){
			cout << 2 << " " << 4 << endl;
		}
		else{
			cout << 2 << " " << p-1 << endl;
		}
	}

	return 0;
}