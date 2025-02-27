#include<iostream>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int arr[4];
		int count=0;
		for(int i=0; i<4; i++){
			cin >> arr[i];
			if(arr[i]>arr[0]){
				count++;
			}
		}
		cout << count << endl;
		
	}

	return 0;
}