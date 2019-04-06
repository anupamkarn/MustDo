//V.Imp problem - DP implementation of LCS 

#include<bits/stdc++.h>

using namespace std;

int main(){
    int t,n,m;
    cin>>t;
    while(t--){
        cin>>n>>m;
        string a,b;
        cin>>a;
        cin>>b;
        int lcs[n+1][m+1];
        for(int i=0; i<=n; i++){
            lcs[i][0]=0;
        }
        for(int i=0; i<=m; i++){
            lcs[0][i]=0;
        }
        for(int i=1; i<=n; i++){
            for(int j=1; j<=m; j++){
                if(a[i-1]==b[j-1]){
                    lcs[i][j]=lcs[i-1][j-1]+1;
                }
                else{
                    lcs[i][j]=max(lcs[i-1][j],lcs[i][j-1]);
                }
            }
        }
        cout<<lcs[n][m]<<endl;
    }

    return 0;
}
