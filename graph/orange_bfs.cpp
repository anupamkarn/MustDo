#include<bits/stdc++.h>

#define MAX 101

using namespace std;

int Mat[MAX][MAX],vis[MAX][MAX];
int d[4][2]={{1,0},{0,1},{-1,0},{0,-1}};
int row,col,g_count;
queue<pair<int,int> > q;

void bfs(int& l_count){
    pair<int,int> p;
    while(!q.empty()){
        p=q.front();
        q.pop();
        int m = p.first;
        int n = p.second;
        if(m==-1&&n==-1){
            l_count++;
            if(!q.empty())
                q.push(make_pair(-1,-1));
        }
        else{
            for(int k=0; k<4; k++){
                int x = m + d[k][0];
                int y = n + d[k][1];
                if(x<row&&y<col&&x>=0&&y>=0){
                    if(Mat[x][y]==1){
                        q.push(make_pair(x,y));
                        Mat[x][y]=2;
                    }    
                }
            }
        }
    }
   
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int l_count=0;
        bool flag=0;
        g_count=0;
        cin>>row>>col;
        for(int i=0; i<row; i++){
            for(int j=0; j<col; j++){
                cin>>Mat[i][j];
                //vis[i][j]=0;
                if(Mat[i][j]==2) q.push(make_pair(i,j));
            }
        }
        q.push(make_pair(-1,-1));
        bfs(l_count);
        
        for(int i=0; i<row; i++){
            for(int j=0; j<col; j++){
                if(Mat[i][j]==1){
                    flag=1;
                    break;
                }
            }
            if(flag) break;
        }
        if(flag) cout<<"-1"<<endl;
        else cout<<l_count-1<<endl;
    }

    return 0;
}
