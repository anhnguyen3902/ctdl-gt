#include<bits/stdc++.h>

using namespace std;

int n,k,s,c[25],dem;
void xuly(){
	int t=0, i;
	for(i=1; i<=k; i++) t=t+c[i];
	if(t == s) dem++;
}
void quaylui(int i){
	int j;
	for(j=c[i-1]+1; j<=n-k+i; j++){
		c[i] = j;
		if(i==k) xuly();
		else quaylui(i+1);
	}
}
main(){
	while(1){
		cin >> n >> k >> s;
		if(!n&&!k&&!s) break;
		c[0] = 0; dem = 0;
		quaylui(1);
		cout << dem << endl;
	}
}
