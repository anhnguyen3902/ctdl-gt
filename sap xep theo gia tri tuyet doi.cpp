#include<bits/stdc++.h>

using namespace std;

void sapxep(int arr[], int n, int x){
	stable_sort(arr, arr+n, [x](int a, int b ){
		if(abs(a-x) < abs(b-x))
			return true;
		else
			return false;
	});
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int n, x;
		cin >> n >> x;
		int a[n];
		for(int i=0; i<n; i++){
			cin >> a[i];
		}
		sapxep(a, n, x);
		for(int i=0; i<n; i++){
			cout << a[i] << " " ;
		}
		cout << endl;
	}
}
