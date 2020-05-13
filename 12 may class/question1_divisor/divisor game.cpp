#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a,b,c;
	cout<<"enter the input:"<<endl
	;
	cin>>a;
	cin>>b;
	cin>>c;
	int i,p=0;

	for(i=2;i<=a;i++)
	{
		if(i%b==0 && i%c==0)
		   p++;
	}
	cout<<"output:"<<p;
}
