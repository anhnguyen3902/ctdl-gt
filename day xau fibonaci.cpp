#include<bits/stdc++.h>

using namespace std;

long long f[100];
char fiboword(int n, long long k){
	if(n == 1) return 'A';
	if(n == 2) return 'B';
	if(k <= f[n- 2])
		return fiboword(n - 2, k);
	return fiboword(n - 1, k - f[n - 2]);
}

int main(){
	f[0] = 0; f[1] = 1;
	for(int i = 2; i <= 92; i++)
		f[i] = f[i - 1] + f[i - 2];
	int t, n;
	long long k;
	cin >> t;
	while(t--){
		cin >> n >> k;
		cout << fiboword(n, k) << endl;
	}
}
