#include<iostream>
#include<algorithm>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n,d;
		cin >> n >> d;
		int arr[n];
		int count=0, count1=0;
		for(int i=0; i<n; i++){
			cin >> arr[i];
		}
		sort(arr, arr+n);
		
		if(arr[n-1]<=d){
			cout << "YES" << endl;
		}
		else if(arr[0]+arr[1]<=d){
			cout << "YES" << endl;
		}
		else{
			cout << "NO" << endl;
		}

	}


	return 0;
}