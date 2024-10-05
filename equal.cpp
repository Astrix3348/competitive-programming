#include<iostream>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int arr[n], sum=0;
		for(int i=0; i<n; i++){
			cin >> arr[i];
			sum += arr[i];
		}
		int req = sum/n;
		int temp = 0;
		bool flag = true;
		for(int i=0; i<n; i++){
			if(arr[i]>req){
				temp += arr[i]-req;
			}
			else if(arr[i]<req){
				temp -= req-arr[i];
				if(temp<0){
					break;
				}
			}
		}
		if(temp<0){
			cout << "NO" << endl;
		}
		else{
			cout << "YES" << endl;
		}
	}

	return 0;
}