#include<iostream>
#include<algorithm>
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
		int f = arr[0];
		int count = 1;

		for(int i=1; i<n; i++){
			if(arr[i]==f){
				count++;
				if(count==3){
					cout << arr[i] << endl;
					break;
				}
			}
			else{
				f = arr[i];
				count = 1;
			}
		}

		if(count<3){
			cout << "-1" << endl;
		}
		
	}

	return 0;
}