#include<iostream>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int a,b,c,x,y;
		cin >> a >> b >> c >> x >> y;
		int dog,cat;
		dog = max(0,x-a);
		cat = max(0,y-b);

		if(c>=dog+cat){
			cout << "YES" << endl;
		}
		else{
			cout << "NO" << endl;
		}
		

	}

	return 0;
}