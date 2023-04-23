#include<bits/stdc++.h>
#define int long long int
using namespace std;
//445A
bool visited[100][100]={false};
void solve(int k,int q,int n,int m,vector<vector<char>>&board,char x)
{
    if(k>=n or q>=m or k<0 or q<0)
    {
        
        return;
    }
                visited[k][q]=true;
			    if(board[k][q]=='.'){
                board[k][q]=x;
				}
                if(k+1<n and q<m and k>=0 and q>=0 and !visited[k+1][q])
                solve(k+1,q,n,m,board,x=='W'?'B':'W');
                if(q+1<m and k<n and k>=0 and q+1>=0 and !visited[k][q+1])
                solve(k,q+1,n,m,board,x=='W'?'B':'W');
                 if(k-1>0 and k-1>n and q>m and q>=0 and !visited[k-1][q])
                solve(k-1,q,n,m,board,x=='W'?'B':'W');
                 if(q-1>=0 and q-1>m and k>n and k>=0 and !visited[k][q-1])
                solve(k,q-1,n,m,board,x=='W'?'B':'W');
            
            
                
      
}

int32_t main()
{
    int n=0; cin>>n;
    int m=0; cin>>m;
    
    vector<vector<char>>board(n,vector<char>(m,' '));
    
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        cin>>board[i][j];
    }
    
    solve(0,0,n,m,board,'W');
 
   
    
    for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            cout<<board[i][j];
            
            cout<<endl;
        }
        
        
        
    
}
