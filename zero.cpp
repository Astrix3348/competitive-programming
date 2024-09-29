#include<iostream>
#include<string>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		string s;
		cin >> s;
		int first_one = s.find('1');
		int last_one = s.rfind('1');

		// if(first_one==-1){
		// 	cout << 0 << endl;
		// }

		int count = 0;
		for(int i=first_one; i<last_one; i++){
			if(s[i]=='0'){
				count++;
			}
		}
		cout << count << endl;
	}

	return 0;
}