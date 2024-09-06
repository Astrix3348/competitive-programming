#include<iostream>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int l,r;
		cin >> l >> r;
		if(r - l < l){
	      cout<<-1<<" "<<-1<<endl;
	      continue;
	    }
	    else{
	      cout<<l<<" "<<(2*l)<<endl;
	    }

	}

	return 0;
}