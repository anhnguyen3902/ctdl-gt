#include<bits/stdc++.h>

using namespace std;

int n, a[20], b[20] = {0}, ok = 1;
long long sum = 0, dem = 0;

void sinh(){
	int i = n;
	while(i >= 1 && b[i] == 1){
		b[i] = 0;
		i--;
	}
	if(i == 0){
		ok = 0;
	}
	else{
		long long choose = 0;
		b[i] = 1;
		for(int i = 1; i <= n; i++){
			if(b[i] == 1){
				choose += a[i];
			}
		}
		if(choose == sum){
			dem++;
			for(int i = 1; i <= n; i++){
				if(b[i] == 1){
					cout << a[i] << " ";
				}
			}
			cout << endl;
		}
	}
}
int main(){
	cin >> n >> sum;
	for(int i = 1; i <= n; i++){
		cin >> a[i];
	}
	sort(a + 1, a + n + 1);
	while(ok){
		sinh();
	}
	cout << dem;
}
