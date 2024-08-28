#include<iostream>
using namespace std;

void solve(){
	int n;
	cin >> n;
	char arr[2][n];
	for(int i=0; i<2; i++){
		for(int j=0; j<n; j++){
			cin >> arr[i][j];
			if(arr[i][j]=='G'){
				arr[i][j] = 'B';
			}
		}
	}
	int count = 0;
	int count1 = 0;
	for(int j=0; j<n; j++){
		if(arr[0][j]==arr[1][j]){
			count++;
			}
		else{
			count1++;
		}
	}
	if(count1>0){
		cout << "NO" << endl;
	}
	else{
		cout << "YES" << endl;
	}
}

int main(){
	int t;
	cin >> t;
	while(t--){
		solve();

	}

	return 0;
}