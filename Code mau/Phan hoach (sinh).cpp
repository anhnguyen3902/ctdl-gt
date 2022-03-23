#include<bits/stdc++.h>

using namespace std;

int n, a[100], ok, cnt;

void khoitao(){
	cnt = 1;
	a[1] = n;
}

void sinh(){
	int i = cnt;
	while(i >= 1 && a[i] == 1){
		i--;
	}
	if(i == 0){
		ok = 0; //cau hinh cuoi cung co n so 1
	}
	else{
		a[i]--;
		int d = cnt - i + 1; //phan con thieu de bu vao
		cnt = i;
		int q = d / a[i];
		int r = d % a[i];
		if(q){
			for(int j = 1; j <= q; j++){
				cnt++;
				a[cnt] = a[i];
			}
		}
		if(r){
			cnt++;
			a[cnt] = r;
		}
	}
}

int main(){
	cin >> n;
	khoitao();
	ok = 1;
	while(ok){
		for(int i = 1; i <= cnt; i++){
			cout << a[i] << " ";
		}
		cout << endl;
		sinh();
	}
}
