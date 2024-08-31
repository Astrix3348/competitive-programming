#include<iostream>
using namespace std;

int main(){
	int n;
	cin >> n;
	int prev,current;
	cin >> prev;
	int maxlen = 1, count = 1;
	for(int i=0; i<n-1; i++){
		cin >> current;
		if(current<=prev){
			count = 1;
			prev = current;
			continue;
		}
		count++;
		if(maxlen<count){
			maxlen = count;
		}
		prev = current;
	}
	cout << maxlen << endl;

	return 0;
}