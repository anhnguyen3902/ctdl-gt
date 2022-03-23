#include<bits/stdc++.h>

using namespace std;

string s;
int a[100], used[100] = {};

void Try(int i){
	for(int j = 0; j < s.size(); j++){
		if(used[j] == 0){
			a[i] = j;
			used[j] = 1;
			if(i == s.size() - 1){
				for(int j = 0; j < s.size(); j++){
					cout << s[a[j]];
				}
				cout << " ";
			}
			else{
				Try(i + 1);
			}
			used[j] = 0;
		}
	}
}
int main(){
	int t;
	cin >> t;
	cin.ignore();
	while(t--){
		cin >> s;
		Try(0);
		cout << endl;
	}
}
