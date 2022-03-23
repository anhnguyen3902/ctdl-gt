#include<bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		long long n, m, maxa = -1e9, minb = 1e9;
		cin >> n >> m;
		long long a[n], b[m];
		for(int i=0; i<n; i++){
			cin >> a[i];
			maxa = max(maxa, a[i]);
		}
		for(int i=0; i<m; i++){
			cin >> b[i];
			minb = min(minb, b[i]);
		}
		cout << (long long)maxa * minb<< endl;
	}
}
