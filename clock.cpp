#include<iostream>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int hh;
		cin >> hh;
		string str;
		cin >> str;
		if(hh==0){
			cout << 12 << str << " AM" << endl;

		}

		else if(hh<=11){
			if(hh<10){
			    cout << 0 << hh;
		    }
			else{
			    cout << hh;
			}
			cout << str << " AM" << endl;
		    
		}
		else if(hh==12){
			cout << hh << str << " PM" << endl;
		}
		else if(hh>12){
			if(hh-12<10){
				cout << 0 << hh-12;
			}
			else{
			    cout << (hh-12);
		    }
		    cout << str << " PM" << endl;
		}

	}

	return 0;
}