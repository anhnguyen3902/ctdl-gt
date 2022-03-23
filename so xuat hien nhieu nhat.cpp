#include<bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n, max = 0;
		cin >> n;
		map <int, int> mp;
		pair <int, int> p;
		int a[n];
		int x;
		for(int i=0; i<n; i++){
			cin >> x;
			mp[x]++;
		}
		for(auto i : mp){
			if(i.second > max){
				max = i.second;
				p = i;
			}
		}
		if(p.second > (float)n/2){
			cout << p.first << endl;
		}else{
			cout << "NO" << endl;
		}
	}
}
