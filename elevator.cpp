#include<iostream>
using namespace std;

int main(){
	int t;
    cin >> t;
    while(t--){
    	int a,b,c;
    	cin >> a >> b >> c;
    	int ans = (a-1);
    	int ans2 = abs(b-c) + (c-1);

    	if(ans==ans2){
    		cout << 3 << endl;
    	}
    	else if(ans<ans2){
    		cout << 1 << endl;
    	}
    	else{
    		cout << 2 << endl;
    	}
    }


	return 0;
}