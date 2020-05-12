#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[]={1,2,4,2,4,1,5};
    int i,p=0;
    
    for(i=0;i<7;i++)
    {    
    
    	p=p^arr[i];// it xor the element n^0=n and n^n=0
    	
	}
	cout<<p;
}
