#include<iostream>
#include<vector>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n,m;
		cin >> n >> m;//n=len, m= sum
        if(n==1){
        	cout << 0 << endl;
        }
        else if(n==2){
        	cout << m << endl;
        }
        else{
        	cout << 2*m << endl;
        }
	}

	return 0;
}