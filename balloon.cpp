#include<iostream>
#include<unordered_set>
using namespace std;

void solve(){
	int n;
	cin >> n;
    string s;
    cin >> s;
    unordered_set<char> x;
    for(char c : s){
    	x.insert(c);
    }
    cout << n+x.size() << endl;
}

int main(){
	int t;
	cin >> t;

	while(t--){
		solve();
	}

	return 0;
}