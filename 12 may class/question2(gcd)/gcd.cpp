#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a,b,i,D,ran;
	cout<<"Enter the input:"<<endl;
	cin>>a;
	cin>>b;
	if(a<=b)
		ran = a;
	else
			ran=b;
	
	if (a==1 && b==1)
     	D=1;
	else
		{
		for(i=ran;i>=1;i--)
		{
				if(a%i==0 && b%i==0)
				{
					D=i;
					break;
				}
		}
	}
	cout<<"ouput: GCD : "<<D<<endl;
}
