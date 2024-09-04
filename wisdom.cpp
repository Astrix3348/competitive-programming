#include<iostream>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int a1,b1,a2,b2,a3,b3,a4,b4;
		cin >> a1 >> b1;
		cin >> a2 >> b2;
		cin >> a3 >> b3;
		cin >> a4 >> b4;
		int ans = 1;
		if(a1==a3){
			ans = ans * abs(b1-b3);
		}
		else{
			ans = ans * abs(a1-a3);
		}
		if(a2==a4){
			ans = ans * abs(b2-b4);
		}
		else{
			ans = ans * abs(a2-a4);
		}
		cout << ans << endl;
	}

	return 0;
}