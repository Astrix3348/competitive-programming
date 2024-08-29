#include<iostream>
#include<algorithm>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int count = 0;
		int maxi = 0;
		int arr[n];
		for(int i=0; i<n; i++){
			cin >> arr[i];
			if(arr[i]==1){
				count = 0;;
			}	
			else{
				count++;
                maxi = max(maxi, count);
			}
		}
		cout << maxi << endl;
	}

	return 0;
}