#include<iostream>
using namespace std;
int main()
{
	int t,n,d,i,j,k;
	cin>>t;
	while(t--)
	{
		cin>>n>>d;
		int a[n];
		for(i=0;i<n;i++)
		{
			cin>>a[i];
		}
		k=0;
		for(i=0,j=n-1;i<j;i++)
		{
			if(abs(a[i]-a[i+1])>d)
			{
				printf("NO\n");
				k=1;
				break;
			}
			if(abs(a[j]-a[j-1])>d)
			{
				printf("NO\n");
				k=1;
				break;
			}
		}
		if(k==0)
		{
			printf("YES\n");
		}
	}
	return 0;
}
