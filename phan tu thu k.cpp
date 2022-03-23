#include<bits/stdc++.h>
using namespace std;
main(){
    int t;
    cin >> t;
    while(t--){
        int n,m,k;
        cin >> n >> m >> k;
        long long a[n],b[m];
        for(int i=0;i<n;i++) cin >> a[i];
        for(int j=0;j<m;j++) cin >> b[j];
        vector<int> v;
        int x=0,y=0;
        while(x<n && y<m){
            if(a[x]<=b[y]){
                v.push_back(a[x]);
                x++;
            }
            else {
                v.push_back(b[y]);
                y++;
            }
        }
        while(x<n){
            v.push_back(a[x]);
            x++;
        }
        while(y<m){
            v.push_back(b[y]);
            y++;
        }
        cout << v[k-1] << endl;
    }
}
