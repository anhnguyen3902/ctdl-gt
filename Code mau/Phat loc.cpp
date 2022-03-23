#include<bits/stdc++.h>
using namespace std;

int n, a[20], ok = 1;

void sinh(){
	int i = n;
	while(i > 0 && a[i] == 1){
		a[i] = 0;
		i--;
	}
	if(i == 0) ok =0;
	else a[i] = 1;
}
int kt(){
	int d = 0;
	if(a[1] != 1 || a[n] != 0) return 0;
	for(int i = 1; i <= n-1; i++) if(a[i] == 1 && a[i+1] == 1) return 0;
	for(int i = 1; i <= n; i++){
		if(a[i] == 0) d++;
		else d = 0;
		if(d > 3) return 0;
		
	}
	return 1;
}

int main(){
	cin >> n;
	for(int i = 1 ;i <= n ; i++) a[i] = 0;
	while(ok){
		if(kt()){
			for(int i = 1; i <= n; i++) cout << (a[i] ? "8" : "6");
			cout << endl;
		}
		sinh();
	}
}
