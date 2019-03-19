#include<bits/stdc++.h>

using namespace std;
int n,m;
long long a[501][501],b[501][501];

bool check(int i, int j, int k){
	cout<<i<<" "<<j<<" "<<k<<endl;
	if(i+k>=n) return 0;
	for(int p=i; p<i+k; p++){
		for(int q=j; q<j+k; q++){
			if(a[p][q]!=b[q][p]){
				cout<<"here"<<endl;
				return 0;
			}
		}
	}
	return 1;
}

int main(){
	cin>>n>>m;
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			cin>>a[i][j];
		}
	}
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			cin>>b[i][j];
		}
	}
	bool flag1=0, flag2=0; 
	int k=0,a_end=0,b_end=0;
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			if(flag2){
				if(i>=a_end&&i<a_end+k-1&&j>=b_end&&j<b_end+k-1) continue;
				else{
					if(a[i][j]!=b[i][j]){
						cout<<"NO"<<endl;
						return 0;
					}
				}
				continue;
			}
			if(a[i][j]==b[j][i]){
				k++;
				continue;
			}
			if(k>1){
				flag1=check(i,j-k,k);
				cout<<flag1<<endl;
				if(flag1){
					flag2=1;
					a_end=i;
					b_end=j-k+1;
				}
			}
			else k=0;
		}
	}
	if(flag1||k==n*m) cout<<"YES"<<endl;
	else cout<<"NO"<<endl;

 return 0;
}

