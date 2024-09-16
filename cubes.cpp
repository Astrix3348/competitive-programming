#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n,f,k;
		cin >> n >> f >> k;
		int arr[n];
		for(int i=0; i<n; i++){
			cin >> arr[i];
		}
		int fav = arr[f-1];
		vector<int> v;
		sort(arr, arr+n, greater<int>());

		bool removed = true;
		bool not_removed = true;

		for(int i=0; i<k; i++){
			if(arr[i]==fav){
				not_removed = false;
			}
		}
		for(int i=k; i<n; i++){
			if(arr[i]==fav){
				removed = false;
			}
		}
		if(removed){
			cout << "YES" << endl;
		}
		else if(not_removed){
			cout << "NO" << endl;
		}
		else{
			cout << "MAYBE" << endl;
		}



	}

	return 0;
}