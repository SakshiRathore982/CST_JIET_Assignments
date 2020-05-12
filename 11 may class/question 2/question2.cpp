#include<bits/stdc++.h>
using namespace std;
int main()
{
//use two loop compare and find 
int ar[]={1,2,3,5,6,8,9};
int i,j,n=7;
int mi=INT_MAX;
for(i=0;i<n;++i)
{ 
for(j=i+1;j<n;++j)
   {
	int p=ar[i]^ar[j];
	if(p<mi)
	{
		mi=p;
	}
 }
   }
cout<<"mininum xor values is "<<mi<<endl;	
/*int p=0;
int m=INT_MAX;
sort(ar.begin(),ar.end());
for(i=0;i<ar.size();i++)
{
p=ar[i]^ar[i-1];
if(m>p)
{
m=p;
}
}
cout<<"minimum XOR values by optimized solution:"<<mi<<endl;
*/
}
