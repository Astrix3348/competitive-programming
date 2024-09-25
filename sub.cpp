#include<iostream>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int arr[7];
		for(int i=0; i<7; i++){
			cin >> arr[i];
		}
		int last = arr[6];
		int num = last - (arr[0] + arr[1]);

		cout << arr[0] << " " << arr[1] << " " << num << endl;
	}

	return 0;
}