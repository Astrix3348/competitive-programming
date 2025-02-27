#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(){
	int n;
	cin >> n;
	vector<int> card(n);

	for(int i=0; i<n; i++){
		cin >> card[i];
	}
	int left = 0, right = n-1;
	int s=0, d=0;
	bool turn = true;

	while(left<=right){
		if(card[left]>=card[right]){
			if(turn){
				s = s + card[left];
			}
			else{
				d = d + card[left];
			}
			left++;
		}
		else{
			if(turn){
				s = s + card[right];
			}
			else{
				d = d + card[right];
			}
			right--;
		}
		turn = !turn;
	}

	cout << s << " " << d << endl;



	return 0;
}