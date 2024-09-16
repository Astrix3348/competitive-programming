#include<iostream>
#include<vector>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		char arr[8][8];
		for(int i=0; i<8; i++){
			for(int j=0; j<8; j++){
				cin >> arr[i][j];
			}
		}
		vector<int> v;
		for(int i=0; i<8; i++){
			for(int j=0; j<8; j++){
				if(arr[i][j]=='#' && arr[i+1][j-1]=='#' && arr[i+1][j+1]=='#'){
					v.push_back(i+1);
					v.push_back(j+1);
				}
			}
		}
		for(int i=0; i<v.size(); i++){
			cout << v[i] << " ";
		}
		cout << endl;
	}

	return 0;
}