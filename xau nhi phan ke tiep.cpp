#include<bits/stdc++.h>

using namespace std;

string s;

void sinh(){
	for(int i = s.size(); i>=1; i--){
		if(s[i] == '0'){
			s[i] = '1';
			for(int j=i+1; j<=s.size(); j++){
				s[j] = '0';
			}
			break;
		}
	}
	for(int i=1; i<s.size(); i++){
		cout << s[i];
	}
}

int main(){
	int t;
	cin >>  t;
	while(t--){
		cin >> s;
		s = '0' + s;
		sinh();
		cout << endl;
	}
}
