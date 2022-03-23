#include<bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int cnt = 0;
		int n, x;
		cin >> n >> x;
		int a[n];
		for(int i=0; i<n; i++){
			cin >> a[i];
		}
		for(int i=0; i<n-1; i++){
			for(int j=i+1; j<n; j++){
				if(a[i] + a[j] == x)
					cnt++;
			}
		}
		cout << cnt << endl;
	}
}
