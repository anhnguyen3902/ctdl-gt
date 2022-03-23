#include<bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int a[n];
		for(int i=0; i<n; i++){
			cin >> a[i];
		}
		int check = 0;
		sort(a, a+n);
		for(int i=1; i<n; i++){
			if(a[i] > a[0]){
				cout << a[0] << " " << a[i] << endl;
				check = 1;
				break;
			}
		}
		if(check == 0) cout << "-1" << endl;
	}
}
