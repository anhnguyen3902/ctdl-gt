#include<bits/stdc++.h>

using namespace std;

bool cmp(int a, int b){
	return a > b;
}

int main(){
	int n;
	cin >> n;
	int a[n];
	vector <int> v1;
	vector <int> v2;
	for(int i=1; i<=n; i++){
		cin >> a[i];
		if(i % 2 == 1){
			v1.push_back(a[i]);
		}else{
			v2.push_back(a[i]);
		}
	}
	sort(v1.begin(), v1.end());
	sort(v2.begin(), v2.end(), cmp);
	int x = 0, y = 0;
	for(int i=1; i<=n; i++){
		if(i % 2 == 1)
			cout << v1[x++] << " ";
		else 
			cout << v2[y++] << " ";
	}
}
