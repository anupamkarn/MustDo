int longestPalindromeSubseq(string s) {
        int n=s.size();
        int M[n][n];
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                M[i][j]=0;
            }
        }
        for(int i=0; i<n; i++){
            M[i][i]=1;
        }
        for(int i=n-1; i>=0; i--){
            for(int j=i+1; j<n; j++){
                if(s[i]==s[j]){
                    M[i][j]=M[i+1][j-1]+2;
                }
                else{
                    M[i][j]=max(M[i+1][j],M[i][j-1]);
                }
            }
        }
        return M[0][n-1];
        
    }
