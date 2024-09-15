#include<iostream>
#include<string>
#include<cmath>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		string m;
		cin >> m;
		int temp;
		
		temp = pow(10,m.size()-1) - stoi(m);
		cout << abs(temp) << endl;


	}


	return 0;
}