#include<iostream>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		long long int n;
		cin >> n;
		long long int abs;
		abs = 90*n;
		if(abs%360==0){
			cout << "YES" << endl;
		}
		else{
			cout << "NO" << endl;
		}
	}

	return 0;
}