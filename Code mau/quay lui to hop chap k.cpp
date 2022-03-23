#include<bits/stdc++.h>

using namespace std;

int n, k, a[100];

void in(){
	for(int i = 1; i <= k; i++){
		cout << a[i];
	}
	cout << endl;
}
void Try(int i){
	for(int j = a[i - 1] + 1; j <= n - k + i; j++){
		a[i] = j;
		if(i == k){
			in();
		}
		else{
			Try(i + 1);
		}
	}
}
int main(){
	cin >> n >> k;
	a[0] = 0;
	Try(1);
}
