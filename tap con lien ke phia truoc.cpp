#include<bits/stdc++.h>

using namespace std;

int n, k, a[1005];

void sinh(int a[]){
	int i = k - 1;
	while(i >= 1 && a[i] + 1 == a[i + 1]){
		i--;
	}
	if(i == 0){
		for(int i = n - k + 1; i <= n; i++){
			cout << i << " ";
		}
	}
	else{
		i++;
		a[i]--;
		for(int j = k; j > i; j--){
			a[j] = n - k + j;
		}
		for(int i = 1; i <= k; i++){
			cout << a[i]<< " ";
		}
	}
}

int main(){
	int t;
	cin >> t;
	while(t--){
		cin >> n >> k;
		for(int i = 1; i <= k; i++){
			cin >> a[i];
		}
		sinh(a);
		cout << endl;
	}
}
