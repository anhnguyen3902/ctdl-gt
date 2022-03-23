#include<bits/stdc++.h>

using namespace std;

int n, k, ok, a[20];
string s;
vector <string> v;
map <string, int> mp;

void khoitao(){
	for(int i = 1; i <= n; i++){
		cin.ignore();
		cin >> s;
		mp[s]++;
	}
	for(auto x : mp){
		v.push_back(x.first);
	}
}
void sinh(){
	int i = k;
	while(i >= 1 && a[i] == n - k + i){
		i--;
	}
	if(i == 0){
		ok = 0;
	}
	else{
		a[i]++;
		for(int j = i + 1; j <= k; j++){
			a[j] = a[j - 1] + 1;
		}
	}
}
int main(){
	cin >> n >> k;
	khoitao();
	n = v.size();
	v.insert(v.begin(), 1, "");
	ok = 1;
	for(int i = 1; i <= k; i++){
		a[i] = i;
	}
	while(ok){
		for(int i = 1; i <= k; i++){
			cout << v[a[i]] << " ";
		}
		sinh();
		cout << endl;
	}
}
