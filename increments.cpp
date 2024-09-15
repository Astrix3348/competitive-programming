#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		char arr[n][4];
		vector<int> v;
		for(int i=1; i<=n; i++){
			for(int j=1; j<=4; j++){
				cin >> arr[i][j];
				if(arr[i][j]=='#'){
					v.push_back(j);
				}
			}
		}
		reverse(v.begin(), v.end());
		for(int i=0; i<v.size(); i++){
			cout << v[i] << " ";
		}
		cout << endl;
	}

	return 0;
}