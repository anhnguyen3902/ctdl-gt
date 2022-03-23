#include<bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int cnt[100001] = {0};
		int a[n];
		for(int i=0; i<n; i++){
			cin >> a[i];
		}
		int ok = 0;
		for(int i=0; i<n; i++){
			if(cnt[a[i]] == 2){
				cout << a[i];
				ok = 1;
				break;
			}
		}
		if(ok == 0){
			cout << "NO";
		}
		cout << endl;
	}
}
