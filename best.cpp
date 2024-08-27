#include<iostream>
using namespace std;

int main(){
	int t;
	cin >> t;

	while(t--){
		char s[5];
		int count=0;
	    int count1=0;
		for(int i=0; i<5; i++){
			cin >> s[i];
		}
		for(int i=0; i<5; i++){
			if(s[i]=='A'){
				count++;
			}
			else{
				count1++;
			}
		}
		if(count>count1){
			cout << 'A' << endl;
		}
		else{
			cout << 'B' << endl;
		}
	}

	return 0;
}