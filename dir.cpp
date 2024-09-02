#include<iostream>
using namespace std;

int main(){
	int t;
	cin >>t;

	while(t--){
		bool flag = false;
		int n;
		cin >> n;
		char s[n];
		int x=0, y=0;
		for(int i=0; i<n; i++){
			cin >> s[i];
		}
		for(int i=0; i<n; i++){
			if(s[i]=='U'){
				y++;
			}
			else if(s[i]=='D'){
				y--;
			}
			else if(s[i]=='L'){
				x--;
			}
			else{
				x++;
			}
			if(x==1 && y==1){
				flag = true;
				break;
			}
		}
		if(flag){
			cout << "YES" << endl;
		}
		else{
			cout << "NO" << endl;
		}
	}
	return 0;
}