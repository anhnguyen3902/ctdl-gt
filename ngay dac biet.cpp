#include <bits/stdc++.h> 
using namespace std; 
int n;
int a[100]; 
int ok = 1; 
int kt(){
	int d0 = 0, d2 = 0;
	if(a[1] == 0 && a[2] == 0) return 0;
    if(a[3] == 0 && a[4] == 0) return 0;
	if(a[3] != 0) return 0;
	if(a[5] == 0) return 0;
	for(int k = 1; k <= n; k++){
		if(a[k] == 0) d0++;
		if(a[k] == 2) d2++;
	}
	if(d0 != 0 && d2 != 0) return 1;
	return 0; 
}
void skt() { 
	int i = n; 
	while(i >= 1 && a[i] == 2) {
		a[i] = 0; 
		i--; 
	} 
	if(i==0) ok = 0;
	else a[i] = 2;
} 
int main() {
	n = 8;
	for(int i=1; i<=n; i++) a[i] = 0; 
	while(ok == 1){  
		if( kt()){
			for(int i = 1; i <= n; i++){	
				cout << a[i];
				if(i == 2) cout << "/";
				if(i == 4) cout << "/";
			}
			cout << endl ; 
		}
		skt(); 
	}
}
