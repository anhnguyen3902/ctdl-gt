#include<bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n, m;
		cin >> n >> m;
		vector <int> v(n + m);
		int a[n], b[m];
		for(int i=0; i<n+m; i++){
			cin >> v[i];
		}
		sort(v.begin(), v.end());
		for(int x : v){
			cout << x << " ";
		}
		cout << endl;
	}
}
