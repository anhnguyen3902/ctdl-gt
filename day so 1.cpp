#include<bits/stdc++.h>

using namespace std;

int n, a[100];
void arr(int a[], int n){
	if(n > 0){
		cout << "[";
		for(int i = 0; i < n - 1; i++){
			cout << a[i] << " ";
		}
		cout << a[n - 1] << "]" << endl;
		for(int i = 0; i < n - 1; i++){
			a[i] = a[i] + a[i + 1];
		}
		arr(a, n - 1);
	}
}
int main(){
	int t;
	cin >> t;
	while(t--){
		cin >> n;
		int a[n];
		for(int i = 0; i < n; i++){
			cin >> a[i];
		}
		arr(a, n);
		cout << endl;
	}	
}
