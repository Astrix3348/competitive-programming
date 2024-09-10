#include<iostream>
#include<cmath>
#include<vector>
using namespace std;

//3.14159265358979323846264338327950288419

int main(){
	int t;
	cin >> t;
	string p = "314159265358979323846264338327";
	while(t--){
		string s;
		cin >> s;
		int i=0;
        while(i < s.size() && i < p.size() && s[i] == p[i]){
        	i++;
        }
        cout << i << endl;
	}

	return 0;
}