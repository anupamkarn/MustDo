//finding word in Alphabet matrix, using Backtracking  

int d[4][2]={{1,0},{0,1},{-1,0},{0,-1}};

int dfs(vector<string> &A, string B,int x, int y, int count, int n, int m){
    if(x<0&&x>=n&&y<0&&y>=m){
        return 0;
    }
    if(count>=B.size()){
        return 1;
    }
    for(int i=0; i<4; i++){
        int dx = x + d[i][0];
        int dy = y + d[i][1];
        if((dx>=0&&dx<n&&dy>=0&&dy<m)){
            if(A[dx][dy]==B[count]){
                if(dfs(A,B,dx,dy,count+1,n,m)) return 1;
            }
            else continue;
        }
    }
    return 0;
}

int Solution::exist(vector<string> &A, string B) {
    int n = A.size();
    int m = A[0].size();
    bool flag=0;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            flag = dfs(A,B,i,j,0,n,m);
            if(flag) return 1;
        }
    } 
    return 0;
}
