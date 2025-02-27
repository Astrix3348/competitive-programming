#include<iostream>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		string s;
		cin >> s;
		int sum=0, sum1=0;
		for(int i=0; i<6; i++){
			if(i<3){
				sum=sum+s[i];
			}
			else{
				sum1 = sum1+s[i];
			}
		}
		if(sum==sum1){
			cout << "YES" << endl;
		}
		else{
			cout << "NO" << endl;
		}
	}


	return 0;
}