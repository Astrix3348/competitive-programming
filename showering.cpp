#include<iostream>
#include<vector>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n,s,m;
		cin >> n >> s >> m;
		int prev=0;
		bool flag = false;
		for(int i=0; i<n; i++){
			int start,end;
			cin >> start >> end;

			if(start-prev>=s){
				flag=true;
			}
			prev = end;
			
		}
		if(m-prev >= s){
			flag = true;
		}
		cout << (flag ? "YES" : "NO") << endl;
	}

	return 0;
}