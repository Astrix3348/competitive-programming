#include<iostream>
#include<algorithm>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n, k;
		cin >> n >> k;
		int arr[k];
		for(int i=0; i<k; i++){
			cin >> arr[i];
		}
		sort(arr,arr+k);
		int count=0;
		for(int i=0; i<k-1; i++){
			count += (arr[i]-1) + arr[i];
		}
		cout << count << endl;
	}

	return 0;
}