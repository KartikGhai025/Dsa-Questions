#include <iostream>
using namespace std;

int fib(int n)
{
    int dp[6];
    for(int i=0; i< 6; i++){
        if(i==0 || i==1){
         dp[i]= i; 
       }
       else
        dp[i]=dp[i-1]+dp[i-2];
    }
    return dp[n];
}
int main() {
   cout<<fib(5);
    return 0;
}
