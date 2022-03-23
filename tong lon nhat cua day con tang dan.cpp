#include<bits/stdc++.h>
using namespace std;
int qhd(int a[],int n){
	int i,j,F[1005], kq=0;
	for(i=0;i<n;i++){
		F[i]=a[i];
		for(j=0;j<i;j++){
			if(a[j]<a[i]){
				F[i]=max(F[i],F[j]+a[i]);
			}
		}
		kq=max(kq,F[i]);
	}
	return kq;
}
main(){
	int t,n,a[1001];
	cin>>t;
	while(t--){
		cin>>n;
		for(int i=0;i<n;i++)	cin>>a[i];
		cout<<qhd(a,n)<<endl;
	}
}
