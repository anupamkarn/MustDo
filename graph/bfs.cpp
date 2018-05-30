#include<bits/stdc++.h>

using namespace std;

int main(){int N;
    cin>>N;
    vector <int> v[N+1];
    int x,y;
    for(int i=0; i<N-1; i++){
        cin>>x;
        cin>>y;
        v[x].push_back(y);
        v[y].push_back(x);
    }
    int m;
    cin>>m;
//     for(int i=1; i<N+1; i++){
// 		cout<<i<<"-->";
// 		for(int j=0; j<v[i].size(); j++)
// 		{
// 			cout<<v[i][j]<<"-->";
// 		}
// 		cout<<endl;
// 	}
    bool aux[N+1]={0};
    queue<int> q;
    int level[N+1],count[N+1]={0};
    level[1]=1;
    count[level[1]]++;
    int p;
    q.push(1);
    while(!q.empty()){
        p = q.front();
        aux[p]=1;
        q.pop();
        for(int j=0; j<v[p].size(); j++){
             if(aux[v[p][j]]==0){
                 
                 aux[v[p][j]]==1;
                 level[v[p][j]]=level[p]+1;
                 count[level[v[p][j]]]++;
                 q.push(v[p][j]);
             }
            
        }
    }
    
    cout<<count[m]<<endl;
	
//	int check[4]={0};
//	queue <int> q;
//	int level[4];
//	
//	void bfs(int s) {
//		check[s]=1;
//		q.push(s);
//		level[s]=0;
//		while(!q.empty()){
//			int p = q.front();
//			q.pop();
//				for(int j=0; j<v[p].size(); j++){
//					
//					if(check[v[p][j]]==0){
//						q.push(v[p][j]);
//						check[v[p][j]]==1;
//						level[v[p][j]]== level[p]+1;
//					}
//					
//				}
//			
//		}
//	}
//		
//		bfs(1);
//		
//	
//cout<<endl;
//string str="anupam";
//cout<<str.length();
	
}

