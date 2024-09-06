#include<iostream>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int x, odd=0;
		for(int i=0; i<n; i++){
			cin >> x;
			(x & 1) ? odd++ : odd+=0;
		}
		(((odd == n) || (odd == 0)) && !(odd & 1)) ? cout << "NO" << endl : cout << "YES" << endl;
	}

	return 0;
}