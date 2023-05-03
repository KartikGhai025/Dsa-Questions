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
return p[n][w]= max(
    p[n-1]+ks(w,p,W-w[n-1],n-1), 
    ks(w,p,W,n-1));

}

int main(){
    
     for (int i = 0; i < 10; i++)
        for (int j = 0; j < 10; j++)
            dp[i][j] = -1;
	int p[]= {60,100,120};
	int w[]= {10,20,30 };
	int n = sizeof(p) / sizeof(p[0]);
	int W= 50;
	cout<<ks(w,p,W,n);
	
}
