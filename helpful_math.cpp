#include<iostream>
#include<algorithm>
using namespace std;

int main(){
	string s;
	cin >> s;
	sort(s.begin(), s.end());

	if(s.size()>1){
		for(int i=0; i<s.size(); i++){
			if(s[i]!='+'){
				cout << s[i];
				if(i<s.size()-1){
				   cout << '+';
			    }
			}
		}
    }   
    else{
    	cout << s << endl;
    }


	return 0;
}