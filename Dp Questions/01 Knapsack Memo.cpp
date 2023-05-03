#include <bits/stdc++.h>
using namespace std;

int dp[10][10];
int ks(int w[],int p[],int W, int n){

if(n==0 || W==0){
	return 0;
}

if(dp[n][W]!=-1){
    return dp[n][W];
}
if(w[n-1]> W){
    return dp[n][W]= ks(w,p,W,n-1);

}
else
return dp[n][W]= max(
    p[n-1]+ks(w,p,W-w[n-1],n-1), 
    ks(w,p,W,n-1));

}

int main(){
    
    memset(dp,-1,sizeof(dp));
	int p[]= {6,1,12};
	int w[]= {1,2,3 };
	int n = sizeof(p) / sizeof(p[0]);
	int W= 3;
	cout<<ks(w,p,W,n);
	
	
}
