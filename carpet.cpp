#include<iostream>
#include<vector>
#include<string>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n,m;
		cin >> n >> m;
		vector<string> carpet(n);
		for(int i=0; i<n; i++){
			cin >> carpet[i];
		}
		int current = 0;
		string target = "vika";

		for(int j=0; j<m && current<4; j++){
			for(int i=0; i<n; i++){
				if(carpet[i][j]==target[current]){
					current++;
					break;
				}
			}
		}
		if(current==4){
			cout << "YES" << endl;
		}
		else{
			cout << "NO" << endl;
		}
	}

	return 0;
}