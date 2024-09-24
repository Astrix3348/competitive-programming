#include<iostream>
#include<vector>
#include<cmath>
using namespace std;

int main(){
	int n;
	cin >> n;

	string orginal, target;
	cin >> orginal >> target;

	int moves = 0;
	for(int i=0; i<n; i++){
		int o = orginal[i] - '0';
        int t = target[i] - '0';

        int diff = abs(o-t);
        int min_moves = min(diff, 10-diff);

        moves += min_moves;

	}

	cout << moves << endl;


	return 0;
}