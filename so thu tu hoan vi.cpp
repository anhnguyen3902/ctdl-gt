#include<bits/stdc++.h>

using namespace std;

int n, a[15], b[15];

bool check(){
	for(int i = 1; i <= n; i++){
		if(a[i] != b[i]){
			return false;
		}	
	}
	return true;
}
void sinh(){
	int i = n - 1;
	while(i >= 1 && a[i] > a[i+1]){
		i--;
	}
	if(i != 0){
		int j = n;
		while(a[i] > a[j]){
			j--;
		}
		swap(a[i], a[j]);
		reverse(a + i + 1, a + n + 1);
	}
}
int main(){
	int t;
	cin >> t;
	while(t--){
		int cnt = 0;
		cin >> n;
		for(int i = 1; i <= n; i++){
			a[i] = i;
			cin >> b[i];
		}
		while(cnt++){
			if(check()){
				cout << cnt << endl;
				break;
			}
			sinh();
		}
	}
}
