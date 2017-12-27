#include<bits/stdc++.h>

using namespace std;

int main(){
	vector <int> v[10];
	for(int i=0; i<4; i++){
		for(int j=0; j<2; j++)
		{
		int y;
		cin>>y;	
		v[i].push_back(y);	
		}
		
	}
	
	for(int i=0; i<4; i++){
		cout<<i+1<<"-->";
		for(int j=0; j<2; j++)
		{
			if(j==1)
			cout<<v[i][j];
			else
			cout<<v[i][j]<<"-->";
		}
		cout<<endl;
	}
	
	int check[4]={0};
	queue <int> q;
	int level[4];
	
	void bfs(int s) {
		check[s]=1;
		q.push(s);
		level[s]=0;
		while(!q.empty()){
			int p = q.front();
			q.pop();
				for(int j=0; j<v[p].size(); j++){
					
					if(check[v[p][j]]==0){
						q.push(v[p][j]);
						check[v[p][j]]==1;
						level[v[p][j]]== level[p]+1;
					}
					
				}
			
		}
	}
		
		bfs(1);
		
	

 return 0;
}

