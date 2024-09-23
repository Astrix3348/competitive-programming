#include<iostream>
#include<map>
using namespace std;

int main(){
	int t;
	cin >> t;

	while(t--){
		int n;
		cin >> n;
		map<int,int> ma;
		int arr[n];
		int sum=0;
		for(int i=0; i<n; i++){
			cin >> arr[i];
			ma[arr[i]%3]++;
			sum = sum + arr[i];
		}

		if(sum%3==0){
			cout << '0' << endl;
		}
		else if((sum)%3==2 || (sum%3==1 and ma[1])){
			cout << '1' << endl;
		}
		else{
			cout << '2' << endl;
		}
	}

	return 0;
}