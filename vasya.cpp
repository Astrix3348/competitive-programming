#include<iostream>
using namespace std;

int main(){
	int r,b;
	cin >> r >> b;
	int m = max(r,b);
	int count = 0;
	for(int i=0; i<m; i++){
		if(r>=1 && b>=1){
			count++;
			r--,b--;
		}
		if(r==0 || b==0){
			break;
		}
		
	}
    int n = max(r,b)/2;

	cout << count << " " << n << endl;

	return 0;
}