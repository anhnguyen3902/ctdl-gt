#include<bits/stdc++.h>
using namespace std;
bool thu(int a[],int b[],int n,int k){
	int s=0;
	for(int i=0;i<n;i++){
		if(a[i]==1) s+=b[i];
	}
	return(k==s);
}
int main(){
	int n,k;
	cin >> n >> k;
	int a[n];
	int b[n];
	for(int i=0;i<n;i++){
		a[i]=0;
		cin >> b[i];
	}
	int res=0;
	while(1){
		if(thu(a,b,n,k)){
			for(int i=0;i<n;i++){
				if(a[i]==1) cout << b[i] << " ";
		}
		res++;
		cout << endl;
		}
		int i=n-1;
		while(a[i]==1) {
			a[i]=1-a[i];
			i--;
		}
		if(i==-1) break;
		else a[i]=1-a[i];
	}
	cout << res;
	return 0;
}
