#include<iostream>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		long long int n , sum=0;
		cin >> n;
		while(n>0){
			sum+=n;
			n = n/2;
		}
		cout << sum << endl;
	}

	return 0;
}