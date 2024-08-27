#include<iostream>
#include<algorithm>
using namespace std;

int main(){
	int t;
	cin >> t;

	while(t--){
	    int a,b,c,n;
		cin >> a >> b >> c >> n;
		int maxi = max(a, b);
		maxi = max(maxi, c);

		n -= 3*maxi - (a+b+c);
		if(n<0){
			cout << "NO" << endl;
			continue;
		}
		if(n%3==0){
			cout << "YES" << endl;
		}
		else{
			cout << "NO" << endl;
		}
	}

	return 0;
}