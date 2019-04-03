//Dijikastra on matrix, finding minimum cost from top left to bottom right

#include<bits/stdc++.h>

using namespace std;

int M[51][51];
int cost[51][51];
bool vis[51][51];
int d[4][2]={{1,0},{0,1},{-1,0},{0,-1}};

void dijikastra(int n){
    cost[0][0]=M[0][0];
    multiset<pair<int,int> >ms;
    pair<int,int> p;
    ms.insert({0,0});
    int x,y;
    while(!ms.empty()){
        p = *ms.begin();
        ms.erase(ms.begin());
        if(vis[p.first][p.second])
            continue;
        else{
            for(int i=0; i<4; i++){
                x = p.first + d[i][0];
                y = p.second + d[i][1];
                if(x>=0&&x<n&&y>=0&&y<n){
                    if(cost[x][y]>M[x][y]+cost[p.first][p.second]||cost[x][y]==-1){
                        auto it = ms.find({x,y});
                        if(it!=ms.end())
                            ms.erase(it);
                        cost[x][y]=M[x][y]+cost[p.first][p.second];
                        ms.insert({x,y});
                    }
                }
            }
        }    
    }
}

int main(){
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                cin>>M[i][j];
                cost[i][j]=-1;
                vis[i][j]=0;
            }
        }
        cost[0][0]=0;
        dijikastra(n);
        
        cout<<cost[n-1][n-1]<<endl;
    }
    return 0;
}
