#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n; 
		cin >> n;
	
		int count=0, count1=0;
		
		string s;
        vector<vector<int> > arr(n,n);
        for (int i = 0; i < n; i++) {
            cin >> s;
            for (int j = 0; j < s.size(); j++) {
                arr[i][j] = s[j] - '0';  // Convert char to int
            }
        }


		for(int j=0; j<n; j++){
			for(int i=0; i<n; i++){
				if(arr[i][j]==1){
					count++;
					if(i+1 < n && arr[i+1][j]==1){
						count1++;
					}
					break;
				}
			}
			if(arr[j][0]==1){
				count++;
				count1++;
			}
		}
		if(count==count1){
			cout << "SQUARE" << endl;
		}
		else{
			cout << "TRIANGLE" << endl;
		}
	}

	return 0;
}