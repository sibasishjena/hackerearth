#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	long long int x,n=0,d,i;
	string a;
	cin>>a;
	for(i=0;i<(a.size());i++)
	{
		d=a[i]-96;
		n=n+d;
	}
	if(n%3==0&&(a[a.size()-1]-96)%2==0)
	{
		printf("YES\n");
	}
	else
	{
		printf("NO\n");
	}
	return 0;
}
