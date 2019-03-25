//pass matrix as parameter in given function

int getId(int M[MAX][MAX], int n)
{
    vector<int> v;
    int count=0;
    bool flag=0;
    for(int i=0; i<n; i++){
        if(M[0][i]){
            flag=1;
            count=0;
            for(int j=0; j<n; j++){
                if(M[j][i]){
                    count++;
                }
            }
            if(count==n-1||count==n){
                v.push_back(i);
            }
        }
    }
    if(flag==0){
        count=0;
        for(int i=0; i<n; i++){
            count+=M[i][0];
        }
        if(count==n-1) return 0;
        else return -1;
    }
    //for(auto u:v) cout<<u<<" ";
    for(auto u:v){
        count=0;
        for(int i=0; i<n; i++){
            count+=M[u][i];
        }
        if(count==0||(count==1&&M[u][u]==1)){
            return u;
        }
    }
    return -1;
}
