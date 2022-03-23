#include<bits/stdc++.h>

using namespace std;

bool cmp(int a, int b){
	return a > b;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		int n, x;
		cin >> n >> x;
		int a[1000];
		for(int i=0; i<n; i++){
			cin >> a[i];
		}
		sort(a, a+n, cmp);
		for(int i=0; i<x; i++){
			cout << a[i] << " ";
		}
		cout << endl;
	}
}
