#include<iostream>
#include<algorithm>
using namespace std;

void solve(){
	int n,x;
	cin >> n >> x;
	if(n>2){
		n-=2;
		if(n%x>0){
			cout << (n / x + 2) << endl;
		}
		else{
			cout << (n/x+1) << endl;
		}
	}
	else{
		cout << 1 << endl;
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