#include <bits/stdc++.h>
using namespace std;


int ks(int w[],int p[],int W, int n){

if(n==0 || W==0){
	return 0;
}

if(w[n-1]> W){
    return ks(w,p,W,n-1);

}
else
return max(
    p[n-1]+ks(w,p,W-w[n-1],n-1), 
    ks(w,p,W,n-1));

}

int main(){
	int p[]= {60,100,120};
	int w[]= {10,20,30 };
	int n = sizeof(p) / sizeof(p[0]);
	int W= 50;
	cout<<ks(w,p,W,n);
	
}
