#include<bits/stdc++.h>
using namespace std;

main()
{
	int t, i, d, n;
	string s;
	cin >> t;
	while(t--)
	{
		cin >> d >> s;
		int a['z'+1]={0}, n=s.size();
		for(i=0;i<s.size();i++)
			a[s[i]]++;
		int m=*max_element(a,a+'z');
		if((m-1)*d<n)
			cout << 1 << endl;
		else
			cout << -1 << endl;
	}
}
