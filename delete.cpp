#include<iostream>
using namespace std;

int main(){
	int t;
	cin >> t;
    while(t--){
    	string s;
    	cin >> s;
    	char c;
    	cin >> c;
    	int n = s.size();
    	bool del = false;
    	for(int i=0; i<s.size(); i++){
    		if(s[i]==c){
    			int left_len = i;
    			int right_len = n-i-1;

    			if(left_len%2==0 && right_len%2==0){
    				del = true;
    			}
    		}
    	}
    	if(del==true){
    		cout << "YES" << endl;
    	}
    	else{
    		cout << "NO" << endl;
    	}
    }

	return 0;
}