#include<iostream>
using namespace std;

int main(){
	string s;
	cin >> s;
	int count=0, count1=0, count2=0;
	for(int i=0; i<s.size(); i++){
		if(s[i]=='('){
			count++;
		}
		if(s[i]==')'){
			count--;
		}
		if(s[i]=='{'){
			count1++;
		}
		if(s[i]=='}'){
			count1--;
		}
		if(s[i]=='['){
			count2++;
		}
		if(s[i]==']'){
			count2--;
		}

	}
	if(count==0 && count1==0 && count2==0){
		cout << "Balanced" << endl;
	}
	else{
		cout << "Not Balanced" << endl;
	}

	return 0;
}