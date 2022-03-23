#include<bits/stdc++.h>
using namespace std;
int number[6], OK ,B[6];
void quaylui(int i, int s){
	if(OK)	return;
	if(i==5 && s==23){
		OK=1;
		return;
	}
	for(int j=0;j<5;j++){
		if(B[j]==0){
			B[j]=1;
			quaylui(i+1,s+ number[j]);
			quaylui(i+1,s*number[j]);
			quaylui(i+1,s-number[j]);
			B[j]=0;
		}
	}
}
main(){
	int t,i;
	cin>>t;
	while(t--){
		for(i=0;i<5;i++)	cin>>number[i];
		OK=0;
		for(i=0;i<5;i++){
			B[i]=1;
			quaylui(1,number[i]);
			B[i]=0;
		}
		if(OK)	cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
}
