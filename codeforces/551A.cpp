#include<bits/stdc++.h>

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n,m,h;
	cin>>n>>m>>h;
	int front[m];
	for(int i=0; i<m; i++)
		cin>>front[i];
	int left[n];
	for(int i=0; i<n; i++)
		cin>>left[i];
	int top[n][m];
	int frontSum[m]={0};
	int leftSum[n]={0};
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			cin>>top[i][j];
			frontSum[j]+=top[i][j];
			leftSum[i]+=top[i][j];
		}
	}
	
	for(int i=0; i<m; i++){
		if(frontSum[i]==1){
			for(int j=0; j<n; j++){
				if(top[j][i]==1){
					top[j][i]=front[i];
					break;
				}
			}
		}
	}
	for(int i=0; i<n; i++){
		if(leftSum[i]==1){
			for(int j=0; j<m; j++){
				if(top[i][j]==1){
					top[i][j]=left[i];
					break;
				}
			}
		}
	}
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			cout<<top[i][j]<<" ";
		}
		cout<<endl;
	}		
	return 0;
}

