#include <iostream>
#include<vector>
using namespace std;
vector<int> dp(10,-1);

int fib(int n)
{
    if(dp[n]==-1){
        if(n==0 || n==1){
         dp[n]= n;
         
       }
       else
        dp[n]=fib(n-1)+fib(n-2);
     
    }
   
    return dp[n];
    
}

int main() {
   cout<<fib(6);
    return 0;
}