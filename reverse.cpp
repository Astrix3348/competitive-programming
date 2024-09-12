#include<iostream>
#include<vector>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n, m;
		cin >> n >> m;
		int arr[n];
		vector<int> v;
		for(int i=0; i<n; i++){
			cin >> arr[i];
		}
		for(int i=m+1; i<n; i++){
			v.push_back(arr[i]);
		}

		for(int i=0; i<=m; i++){
			cout << arr[i] << " ";
		}

		reverse(v.begin(), v.end());

		for(int i=0; i<v.size(); i++){
			cout << v[i] << " ";
		}
		cout << endl;
	}

	return 0;
}