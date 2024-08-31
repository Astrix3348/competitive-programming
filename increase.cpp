#include<iostream>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int x;
		int odd = 0, ev = 0;
		for(int i=0; i<2*n; i++){
			cin >> x;
			if((x & 1) == 1){
				odd++;
			}
			else{
				ev++;
			}
		}
		if(odd==ev){
			cout << "YES" << endl;
		}
		else{
			cout << "NO" << endl;
		}
	}


	return 0;
}