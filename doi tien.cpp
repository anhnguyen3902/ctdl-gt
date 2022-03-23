#include<bits/stdc++.h>

using namespace std;

int n, A[35], s, kq;

void quaylui(int i, int t, int x){
	if(t > s || x > kq) return;
	if(i == n){
		if(t == s) kq = min(kq, x);
		return;
	}
	quaylui(i+1, t, x);
	quaylui(i+1, t+A[i], x+1);
}

main(){
	cin >> n >> s;
	for(int i=0; i<n; i++) cin >> A[i];
	kq = 1000;
	quaylui(0, 0, 0);
	if(kq == 1000) cout << "-1";
	else cout << kq;
}
