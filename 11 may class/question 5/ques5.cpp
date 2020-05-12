#include<bits/stdc++.h>
using namespace std;
int floorsqrt(int x)
{   
	int i=1,ans=1;
	while(x>=ans)
	{
		i++;
		ans=i*i;
		
	}
	
	return(i-1);
}
int main()
{

	cout<<"floor square root of number:"<<floorsqrt(99);		
}
