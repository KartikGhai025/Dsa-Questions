#include <bits/stdc++.h>
using namespace std;

int dp[10][10];
bool subSetSum(int arr[],int sum, int n){
    
    if(n==0) return false;
    if(sum==0) return true;
    
    if(arr[n-1]> sum) return subSetSum(arr, sum ,n-1);
    
    return  subSetSum(arr, sum ,n-1)|| subSetSum(arr, sum-arr[n-1] ,n-1) ;
}

int main(){
    
 //   memset(dp,-1,sizeof(dp));
	int arr[]= {6,1,12};
	int n = sizeof(arr) / sizeof(arr[0]);

	cout<<subSetSum(arr,13,n);

}
