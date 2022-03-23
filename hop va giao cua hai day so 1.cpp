#include<bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n, m;
		cin >> n >> m;
		int a[n], b[m], c[10000];
		set <int> s;
		for(int i=0; i<n; i++){
			cin >> a[i];
			s.insert(a[i]);
		}
		for(int i=0; i<m; i++){
			cin >> b[i];
			s.insert(b[i]);
		}
		for (int x : s){
			cout << x << " ";
		}
		cout << endl;
		for(int i=0; i<n; i++){
			for(int j=0; j<m; j++){
				if(a[i] == b[j]){
					cout << a[i] << " ";
				}
			}
		}
		cout << endl;
	}
}
