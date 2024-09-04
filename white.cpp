#include<iostream>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int start=0, end=0;
		string s;
		cin >> s;
		for(int i=0; i<n; i++){
			if(s[i]=='B' && start == 0){
				start = i+1;
			}
			if(s[i]=='B' && start!=0){
				end = i+1;
			}
		}
		cout << abs(end-start)+1 << endl;
	}

	return 0;
}