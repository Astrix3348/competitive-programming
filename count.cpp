#include<iostream>
#include<string>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n, m;
		cin >> n >> m;
		string x , s;
		cin >> x;
		cin >> s;

		bool found = false;

		for(int ops=0; ops<=5; ops++){
			if(x.find(s) != string::npos){
				cout << ops << endl;
				found = true;
				break;
			}

			x.append(x);
		}

		if(!found){
			cout << "-1" << endl;
		}

		
	}

	return 0;
}