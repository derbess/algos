#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[n][n],cnt=0;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			cin>>a[i][j];
		}
	}
	for(int i=0;i<n;i++)
	{
		for(int j=i;j<n;j++)
		{
			if(a[i][j]==1) cnt++;
		}
	}
	cout<<cnt;
	return 0;
}