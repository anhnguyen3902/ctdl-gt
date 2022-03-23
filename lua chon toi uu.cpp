#include<bits/stdc++.h>
using namespace std;
struct task
{
	int start, finish;
} a[100005];
bool cmp(task x, task y)
{
	return x.finish < y.finish;
}
main()
{
	int t,i,j,d,n;
	cin >> t;
	while(t--)
	{
		cin >> n;
		for(i=0;i<n;i++)
			cin >> a[i].start >> a[i].finish;
		sort(a,a+n,cmp);
		i=0;
		d=1;
		for(j=1;j<n;j++)
		{
			if(a[j].start >= a[i].finish)
			{
				i=j;
				d++;
			}
		}
		cout << d << endl;
	}
}
