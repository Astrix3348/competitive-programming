#include<iostream>
#include<vector>
using namespace std;

int maxi(vector<int> &arr){
	int res = arr[0];

	for(int i=0; i<arr.size(); i++){
		int currSum = 0;
		for(int j=i; j<arr.size(); j++){
			currSum += arr[j];

			res = max(res, currSum);
		}
	}
	return res;
}

int main(){
	int n;
	cin >> n;
	vector<int> arr;
	int temp[n];
	for(int i=0; i<n; i++){
		cin >> temp[i];
		arr.push_back(temp[i]); 
	}
	cout << maxi(arr);

	return 0;
}