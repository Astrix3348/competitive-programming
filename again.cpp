#include<iostream>
using namespace std;

void solve(){
	int n;
	cin >> n;
	int sum = 0;
	int last_dig = n%10;
	n = n/10;
	sum = last_dig + n;

	cout << sum << endl;


	
  
 
}

int main(){
	int t;
	cin >> t;

	while(t--){
		solve();		
		
	}

	return 0;
}