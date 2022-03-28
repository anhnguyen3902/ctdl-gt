#include<bits/stdc++.h>

using namespace std;

int n, a[100];
stack <string> s;
void arr(int a[], int n){
	string s1;
	if(n > 0){
		s1 = "[";
		for(int i = 0; i < n - 1; i++){
			s1 += to_string(a[i]);
			s1 += " ";
		}
		s1 += to_string(a[n - 1]);
		s1 += "]";
		s.push(s1);
		for(int i = 0; i < n - 1; i++){
			a[i] = a[i] + a[i + 1];
		}
		arr(a, n - 1);
	}
}
int main(){
	int t;
	cin >> t;
	while(t--){
		cin >> n;
		for(int i = 0; i < n; i++){
			cin >> a[i];
		}
		arr(a, n);
		while(s.size()){
			cout << s.top() << " ";
			s.pop();
		}
		cout << endl;
	}
}
