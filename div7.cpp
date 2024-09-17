#include<iostream>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		if(n%7==0){
			cout << n << endl;
		}
		else{
			n = n - n%10;
			for(int i=0; i<10; i++){
				if((n+i)%7==0){
					cout << n+i << endl;
					break;
				}
			}
		}
	}

	return 0;
}