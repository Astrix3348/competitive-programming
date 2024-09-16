#include<iostream>
#include<set>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int arr[n];
		set<int> v;
		for(int i=0; i<n; i++){
			cin >> arr[i];
			v.insert(arr[i]);
		}
		int x = n - v.size();
		if(x%2!=0){
			x++;
		}
		cout << n-x << endl;
	}

	return 0;
}