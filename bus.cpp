#include<iostream>
#include<vector>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		vector<int> a(n);
		for(int i=0; i<n; i++){
			cin >> a[i];
		}
		bool valid = true;
		int left = a[0], right = a[0];
		for(int i=1; i<n; i++){
			if(a[i]==right+1){
				right++;
			}
			else if(a[i]==left-1){
				left--;				
			}
			else{
				valid = false;
				break;
				
			}
		}
		if(valid){
			cout << "YES" << endl;
		}
		else{
			cout << "NO" << endl;
		}
	}

	return 0;
}