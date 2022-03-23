#include<bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n, k;
		cin >> n >> k;
		int a[n];
		for(int i = 0; i < n; i++){
			cin >> a[i];
		}
		if(binary_search(a, a + n, k)){
			cout << upper_bound(a, a + n, k) - a << endl;
		}
		else{
			cout << "NO" << endl;
		}
	}
}
