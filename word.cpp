#include<iostream>
#include<vector>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		char arr[8][8];
		vector<char> v;
		for(int i=0; i<8; i++){
			for(int j=0; j<8; j++){
				cin >> arr[i][j];
				if(arr[i][j]!='.'){
					v.push_back(arr[i][j]);
				}
			}
		}
		for(int i=0; i<v.size(); i++){
			cout << v[i];
		}
		cout << endl;
	}

	return 0;
}