#include<bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int cnt[1000] = {0};
		int n;
		cin >> n;
		int a[n];
		for(int i=0; i<n; i++){
			cin >> a[i];
			cnt[a[i]]++;
		}
		for(int i=0; i<n-1; i++){
			for(int j=i+1; j<n; j++){
				if(cnt[a[i]] < cnt[a[j]]){
					swap(a[i], a[j]);
				}
				else if(cnt[a[i]] == cnt[a[j]] && a[i] > a[j]){
					swap(a[i], a[j]);
				}
			}
		}
		for(int i=0; i<n; i++){
			cout << a[i] << " ";
		}
		cout << endl;
	}
}
