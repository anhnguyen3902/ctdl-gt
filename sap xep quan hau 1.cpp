#include<bits/stdc++.h>

using namespace std;

int n, x[100], cot[100], d1[100], d2[100];
int cnt;

void Try(int i){
	//duyet tat ca cac kha nang x[i] co the nhan dc
	for(int j = 1; j <= n; j++){
		//chuan bi gan x[i] = j
		if(cot[j] == 1 && d1[i - j + n] == 1 && d2[i + j - 1] == 1){
			x[i] = j;
			cot[j] = d1[i - j + n] = d2[i + j - 1] = 0;
			if(i == n){
				cnt++;
			}
			else{
				Try(i + 1);
			}
			cot[j] = d1[i - j + n] = d2[i + j - 1] = 1;
		}
	}
}
int main(){
	int t;
	cin >> t;
	while(t--){
		cin >> n;
		cnt = 0;
		for(int i = 1; i <= 20; i++){
			cot[i] = d1[i] = d2[i] = 1;
		}
		Try(1);
		cout << cnt << endl;
	}
}
