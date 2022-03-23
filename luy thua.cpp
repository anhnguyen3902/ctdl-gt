#include<bits/stdc++.h>

using namespace std;

int m = 1e9 + 7;
long long powmod(int n, int k){
	if(k == 0) return 1;
	long long x = powmod(n, k/2);
	if(k % 2 == 0) return x * x % m;
	return n * (x * x % m)%m;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		int n, k;
		cin >> n >> k;
		cout << powmod(n, k) << endl;
	}
}
