#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(){
	int t;
		cin >> t;
		while(t--){
			int n,x;
			cin >> n >> x;
			int arr[n];
			for(int i=0; i<n; i++){
				cin >> arr[i];
			}
			vector<int> temp;
			for(int i=0; i<n; i++){
				if(i+1<n){
					temp.push_back(arr[i+1]-arr[i]);
				}
				if(n==1){
					temp.push_back(arr[0]);
				}
			}
			int last = arr[n-1];
			temp.push_back(2*(x-last));
			temp.push_back(arr[0]);

			sort(temp.begin(), temp.end());

			int size = temp.size();
			cout << temp[size-1];
			
			cout << endl;
		}

	return 0;
}