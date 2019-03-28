#include<bits/stdc++.h>

using namespace std;

int d[4][2]={{1,0},{0,1},{-1,0},{0,-1}};
int M[21][21];

bool findPath(int x, int y, int dx, int dy, int vis[][21], int n){
    if(x==dx&&y==dy){
        return 1;
    }
    vis[x][y]=1;
    int tx,ty;
    for(int i=0; i<4; i++){
         tx = x+d[i][0];
         ty = y+d[i][1];
         if(tx>=0&&tx<n&&ty>=0&&ty<n){
            if(vis[tx][ty]==0&&(M[tx][ty]==3||M[tx][ty]==2)){
                if(findPath(tx,ty,dx,dy,vis,n)) return 1;
                
            }
         }
    }
    return 0;
}

int main(){
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        int vis[21][21];
        int sx,sy,dx,dy;
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                cin>>M[i][j];
                vis[i][j]=0;
                if(M[i][j]==1){
                    sx=i;sy=j;
                }
                else if(M[i][j]==2){
                    dx=i;dy=j;
                }
            }
        }
        if(findPath(sx,sy,dx,dy,vis,n)) cout<<"1"<<endl;
        else cout<<"0"<<endl;
    }

    return 0;
}
