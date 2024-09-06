#include<iostream>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n,a,b;
		cin >> n >> a >> b;
		if(2*a<b){
			cout << n*a << endl;
		}
		else{
			int k=n/2;
			int r=n%2;
			cout << (b*k) + (r*a) << endl;
		}
	}


	return 0;
}