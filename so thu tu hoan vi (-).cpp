#include<bits/stdc++.h>
using namespace std;
int a[20],dd[20],n,ddd=1,dem;
void tao(){
    for(int i=1;i<=n;i++) a[i]=i;
}
void check(){
    for(int i=1;i<=n;i++) if(a[i]!=dd[i]) return;
    ddd=0;
    cout<<dem<<endl;
}
void sinh(){
    check();
    int i=n-1;
    while(i>0&&a[i]>a[i+1]) i--;
    if(i==0) ddd=0;
    else{
        dem++;
        int j=n;
        while(a[i]>a[j]) j--;
        swap(a[i],a[j]);
        reverse(a+i+1,a+n+1);

    }
}

int main(){
    int t;
    cin>>t;
    while(t--){
        dem=1;
        ddd=1;
        cin>>n;
        tao();
        for(int i=1;i<=n;i++) cin>>dd[i];
        while(ddd){
            sinh();
            check();
        }
    }
}
