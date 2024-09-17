#include<iostream>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		string s;
		cin >> s;
		string f;
		cin >> f;
		int OneztoZero = 0, ZeroToOne = 0;
		for(int i=0; i<n; i++){
			if(s[i]=='0' && f[i]=='1'){
				ZeroToOne++;
			}
			if(s[i]=='1' && f[i]=='0'){
				OneztoZero++;
			}
		}
		if(ZeroToOne>=OneztoZero){
			cout << ZeroToOne << endl;
		}
		else{
			cout << OneztoZero << endl;
		}

	}

	return 0;
}