#include<iostream>
#include<algorithm>
using namespace std;

void solve(){
	int n;
	cin >> n;
	int arr[n];
	int mina = 0x3f3f3f3f;
	for(int i=0; i<n; i++){
		cin >> arr[i];
	}
	sort(arr,arr+n);
	for(int i=1; i<n; i++){
		mina = min(mina, (arr[i] - arr[i-1]));
	}
	cout << mina << endl;
}

int main(){
	int t;
	cin >> t;

	while(t--){
		solve();
	}

	return 0;
}