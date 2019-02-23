
// direct fucntion implementation using dfs

 
int d[8][2]={{1,0},{0,1},{-1,0},{0,-1},{1,1},{1,-1},{-1,1},{-1,-1}};
int vis[MAX][MAX],Mat[MAX][MAX];
int row,col,c;
void dfs(int i, int j){
    if(i<row&&j<col&&i>=0&&j>=0){
        //cout<<"b";
        vis[i][j]=1;
        for(int k=0; k<8; k++){
            int x = i+d[k][0];
            int y = j+d[k][1];
            if(Mat[x][y]==1&&vis[x][y]==0&&x<row&&y<col&&x>=0&&y>=0)
                dfs(x,y);
        }
    }
    
}
int findIslands(int A[MAX][MAX], int N, int M)
{
    row=N;col=M;c=0;
    for(int i=0; i<N; i++){
        for(int j=0; j<M; j++){
            vis[i][j]=0;
            Mat[i][j]=A[i][j];
        }
    }
    for(int i=0; i<N; i++){
        for(int j=0; j<M; j++){
            if(Mat[i][j]==1&&vis[i][j]==0){
                //cout<<"a";
                dfs(i,j);
                c++;
            }
        }
    }
    return c;
}
