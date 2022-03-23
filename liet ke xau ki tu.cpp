#include<bits/stdc++.h>

using namespace std;

int k;
char a[15], c;

void in(){
	for(int i=1; i<=k; i++)
		cout << a[i];
	cout << endl;
}
void quaylui(int i){
	int j;
	for(j = a[i-1]; j<=c; j++){
		a[i] = j;
		if(i == k) in();
		else quaylui(i+1);
	}
}
main(){
	memset(a, 'A', sizeof(a));
	cin >> c >> k;
	quaylui(1);
}
