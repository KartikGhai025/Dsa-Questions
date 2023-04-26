#include<iostream>
#include<string>
using namespace std;

int LCS(string s1, string s2, int m, int n)
{
    if(m==0 || n==0){
        return 0;
    }
    if(s1[m-1]==s2[n-1]){
        return 1+ LCS(s1,s2,m-1,n-1);}
    else
        return max(LCS(s1,s2,m,n-1),LCS(s1,s2,m-1,n));
    
}

int main()
{
	string s1 = "abcd";
	string s2 = "GXkkT";
	

	cout <<LCS(s1,s2, s1.size(), s2.size());

	return 0;
}


