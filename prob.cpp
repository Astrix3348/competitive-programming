#include<iostream>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		char arr[n];
		int ascii, maxi = 0;
		for(int i=0; i<n; i++){
			cin >> arr[i];
			ascii = (int)arr[i];
			maxi = max(maxi, ascii);
		}
		int number = maxi - 96;
		cout << number << endl;

	}

	return 0;
}