#include<iostream>
using namespace std;

int main(){
	string s;
	cin >> s;

	char upper = toupper(s[0]);
	cout << upper;
	for(int i=1; i<s.size(); i++){
		cout << s[i];
	}
 

	return 0;
}