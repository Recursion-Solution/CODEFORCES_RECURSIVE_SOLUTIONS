#include<bits/stdc++.h>
#define int long long int
using namespace std;
//266B
//Recursive Solution


void solve(int i,string &s)     //Recursive Function
{
	if(i>=s.size()) return;
	if(i+1<s.size() and s[i]=='B' and s[i+1]=='G')
	{
        swap(s[i],s[i+1]);		
		solve(i+2,s);
	}
	    else
		solve(i+1,s);
}

int32_t main()
{
	int n=0; cin>>n; int m=0; cin>>m;
	
	string s=""; cin>>s;
	

		for(int i=0;i<m;i++)
		solve(0,s);

	
	cout<<s<<endl;
}
