#include<bits/stdc++.h>

using namespace std;

int n, a[100], used[100];

void in(){
	for(int i = 1; i <= n; i++){
		cout << a[i];
	}
	cout << endl;
}
void Try(int i){
	for(int j = 1; j <= n; j++){
		if(used[j] == 0){
			a[i] = j;
			used[j] = 1; //danh dau j da duoc su dung
			if(i == n){
				in();
			}
			else{
				Try(i + 1);
			}
			// backtrack
			used[j] = 0;
		}
	}
}
int main(){
	cin >> n;
	Try(1);
}
