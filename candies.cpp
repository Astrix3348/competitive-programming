#include<iostream>
#include<algorithm>
using namespace std;

void solve(){
	int n;
	cin >> n;
	int sum = 0;
	int arr[n];
	for(int i=0; i<n; i++){
		cin >> arr[i];
	}
	sort(arr,arr+n);
    
    for(int i=1; i<n; i++){
    	arr[i] = arr[i] - arr[0];
    	sum = sum + arr[i];
    }
    if(n==1){
    	sum = 0;
    }
    cout << sum << endl;

}

int main(){
	int t;
	cin >> t;
	while(t--){
		solve();

	}

	return 0;
}