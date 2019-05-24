/*
3 4
150 450 100 320
120 130 160 110
10 60 200 220
*/

#include<bits/stdc++.h>

using namespace std;

int maxi=INT_MIN;
int a[100][100];
bool vis[100][100];
int d1[5][2]={{0,-1},{0,1},{1,0},{-1,-1},{-1,1}};
int d2[5][2]={{0,-1},{0,1},{1,0},{1,-1},{1,1}};
void dfs(int n, int m, int i, int j, int c, int s){
	//cout<<i<<" "<<j<<" "<<c<<endl;
	if(c==4){
	    //cout<<s<<endl;
		if(maxi<s){
		    //cout<<s<<endl;
			maxi=s;
			
		}
		return;
	}
	if((j+1)%2){
	    if(c==1){
	        if(i-1>=0&&j-1>=0&&j+1<m&&i+1<n){
	            int M = a[i][j]+a[i-1][j-1]+a[i-1][j+1]+a[i+1][j];
	            if(M>maxi) maxi=M;
	        }
	        if(j-1>=0&&j+1<m&&i-1>=0){
	            int M = a[i][j]+a[i][j-1]+a[i][j+1]+a[i-1][j];
	            if(M>maxi) maxi=M;
	        }
	    }
		for(int k=0; k<5; k++){
			int x = i+d1[k][0];
			int y = j+d1[k][1];
			if(x<n&&x>=0&&y<m&&y>=0&&vis[x][y]==0){
				vis[x][y]=1;
				dfs(n,m,x,y,c+1,s+a[x][y]);
				vis[x][y]=0;
			}
		}
	}
	else{
	    if(c==1){
	        if(i+1<n&&j-1>=0&&j+1<m&&i-1>=0){
	            int M = a[i][j]+a[i+1][j-1]+a[i+1][j+1]+a[i-1][j];
	            if(M>maxi) maxi=M;
	        }
	        if(j-1>=0&&j+1<m&&i+1<n){
	            int M = a[i][j]+a[i][j-1]+a[i][j+1]+a[i+1][j];
	            if(M>maxi) maxi=M;
	        }
	    }
		for(int k=0; k<5; k++){
			int x = i+d2[k][0];
			int y = j+d2[k][1];
			if(x<n&&x>=0&&y<m&&y>=0&&vis[x][y]==0){
				vis[x][y]=1;
				dfs(n,m,x,y,c+1,s+a[x][y]);
				vis[x][y]=0;
			}
		}
	}
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n,m;
	cin>>n>>m;
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			cin>>a[i][j];
			vis[i][j]=0;
		}
	}
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			vis[i][j]=1;
			dfs(n,m,i,j,1,a[i][j]);
		}
	}
	cout<<maxi<<endl;

	return 0;
}

