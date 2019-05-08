void Solution::rotate(vector<vector<int> > &A) {
    int n = A.size()/2;
    int m = A.size();
    for(int i=0; i<n; i++){
        for(int j=i; j<m-i-1; j++){
            int temp = A[i][j];
            A[i][j] = A[m-j-1][i];
            A[m-j-1][i] = A[m-i-1][m-j-1];
            A[m-i-1][m-j-1] = A[j][m-i-1];
            A[j][m-i-1] = temp;
        }
    }
}

