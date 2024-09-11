#include<iostream>
using namespace std;

int main(){
	int t;
	cin >> t;

	while(t--){
		int n;
		cin >> n;
		int arr[n];
		for(int i=0; i<n; i++){
			cin >> arr[i];
		}
		sort(arr, arr+n);

		int profit = abs(arr[0]-arr[n-1]);
		
		cout << profit << endl;
	}

	return 0;
}