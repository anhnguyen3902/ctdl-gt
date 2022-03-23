#include<bits/stdc++.h>

using namespace std;

int n, A[50];

void in(int m){
	for(int i=1; i<=m; i++) cout << A[i] << " ";
	cout << endl;
}

void quaylui(int x, int i, int s){
	int j;
	for(j = x; j >= 1; j--){
		A[i] = j;
		if(j == s) in(i);
		else if(j < s){
			quaylui(j, i+1, s-j);
		}
	}
}

main(){
	cin >> n;
	quaylui(n, 1,n);
}
