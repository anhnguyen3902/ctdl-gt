#include<bits/stdc++.h>

using namespace std;

int n, k, a[21], ok, x;
map <int, int> mp;
vector <int> v;

void khoitao(){
	for(int i = 1; i <= n; i++){
		cin >> x;
		mp[x]++;
	}
	for(auto i : mp){
		v.push_back(i.first);
	}
}
void sinh(){
	int i = k;
	while(i >= 1 && v[i] == v.size() - 1 - k + i){
		i--;
	}
	if(i == 0){
		ok = 0;
	}
	else{
		v[i]++;
		for(int j = i + 1; j <= k; j++){
			v[j] = v[j - 1] + 1;
		}
	}
}
int main(){
	cin >> n >> k;
	khoitao();
	v.insert(v.begin(), 1, '0');
	ok = 1;
	while(ok){
		for(int i = 1; i <= k; i++){
			cout << v[i] << " ";
		}
		cout << endl;
		sinh();
	}
}
