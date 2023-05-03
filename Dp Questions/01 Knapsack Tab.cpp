#include <bits/stdc++.h>
using namespace std;

int dp[10][10];
int ks(int w[],int p[],int W, int n){
for(int i=0 ;i<=n; i++){
    for(int j=0 ; j<=W; j++){
        if(i==0 || j==0){
            dp[i][j]=0;
        }
       else if(w[i-1]>j){
            dp[i][j]= dp[i-1][j];
        }
        else {
            dp[i][j]= max(p[i-1]+dp[i-1][j-w[i-1]], dp[i-1][j]);
            
        }
    }
}
return dp[n][W];
}

int main(){
    
 //   memset(dp,-1,sizeof(dp));
	int p[]= {6,1,12};
	int w[]= {1,2,3 };
	int n = sizeof(p) / sizeof(p[0]);
	int W= 3;
	cout<<ks(w,p,W,n);

}
