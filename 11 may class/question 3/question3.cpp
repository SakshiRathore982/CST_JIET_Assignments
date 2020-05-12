#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n=30; //number of bricks
     int ans=0; //height of stair case
    /*n(n+1)/2=x
    n^2+n-2x=0
    ans=-b+sqrt(b*b-4ac)/2a
    */
    ans=(-1+sqrt(1+8*n))/2;
    cout<<"height of staircase :"<<ans;
	
}

