#include<bits/stdc++.h>

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n;
	cin>>n;
	string s;
	int x,y;
	char a[n][n];
	for(int i=0; i<n; i++){
		cin>>s;
		for(int j=0; j<n; j++){
			a[i][j]=s[j];
		}
	}
	bool flag=0;
	int d[4][2]={{1,0},{0,1},{-1,0},{0,-1}};
	for(int i=1; i<n-1; i++){
		for(int j=1; j<n-1; j++){
			flag=0;
			if(a[i][j]=='.'){
				//cout<<"center"<<i<<" "<<j<<endl;				
				for(int k=0; k<4; k++){
					x = i+d[k][0];
					y = j+d[k][1];
					if(a[x][y]=='.'){
						//cout<<x<<" "<<y<<endl;
						flag=1;
					}
					else{
						//cout<<x<<" "<<y<<endl;
						flag=0;
						break;
					}
				}
				if(flag){
					a[i][j]='#';
					//cout<<i<<" "<<j<<endl;
					for(int k=0; k<4; k++){
						x = i+d[k][0];
						y = j+d[k][1];
						if(a[x][y]=='.'){
							a[x][y]='#';
						}
					}
				}
			}
		}
	}
	bool f=0;
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			//cout<<a[i][j]<<" ";
			if(a[i][j]=='.'){
				f=1;
				break;
			}
		}
		//cout<<endl;
		if(f){
			break;
		}
	}
	if(f){
		cout<<"NO"<<endl;
	}
	else{
		cout<<"YES"<<endl;
	}	
	return 0;
}

