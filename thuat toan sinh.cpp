#include<bits/stdc++.h>

using namespace std;

int n, a[1000], ok;

void khoitao(){
	for(int i=1; i<=n; i++){
		a[i] = 0;
	}
}

void sinh(){
	int i = n;
	while(i >= 1 && a[i] == 1){
		a[i] = 0;
		i--;
	}
	if(i == 0){
		ok = 0;
	}
	else{
		a[i] = 1;
	}
}
void in(){
    for(int i=1;i<=n/2;i++) if(a[i]!=a[n-i+1]) 
		return;
    for(int i=1;i<=n;i++) cout<<a[i]<<" ";
    cout<<endl;
}

int main(){
	cin >> n;
	khoitao();
	ok = 1;
	while(ok){
		in();
		sinh();
	}
}
