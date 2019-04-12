//number of ways to reach from top left to bottom right, allowed moves down and right.

#include<bits/stdc++.h>
#define mod 1000000007

using namespace std;
long long M[1001][1001];
int main(){
    int t;
    cin>>t;
    long n,m,k;
    while(t--){
        cin>>n>>m>>k;
        memset(M, 0, sizeof(M[0][0]) * n * m);
        long x,y;
        bool f1=0,f2=0;
        long endx=INT_MIN,endy=INT_MIN;
        for(long i=0; i<k; i++){
            cin>>x>>y;
            M[x-1][y-1]=-1;
            if(x==n){ f1=1; if(y-1>endy) endy=y-1; }
            if(y==m){ f2=1; if(x-1>endx) endx=x-1; }
        }
        for(long i=0; i<m; i++){
            if(f1){
                if(i>endy)
                    M[n-1][i]=1;
                else    
                    M[n-1][i]=0;
            }
            else M[n-1][i]=1;
        }
        for(long i=0; i<n; i++){
            if(f2){
                if(i>endx)
                    M[i][m-1]=1;
                else    
                    M[i][m-1]=0;
            }
            else M[i][m-1]=1;
        }
        M[n-1][m-1] = 0;
        for(long i=n-2; i>=0; i--){
            for(long j=m-2; j>=0; j--){
                if(M[i][j]!=-1){
                    if(M[i+1][j]==-1&&M[i][j+1]==-1){
                        M[i][j] = 0;
                    }
                    else if(M[i+1][j]==-1){
                        M[i][j] = M[i][j+1];
                    }
                    else if(M[i][j+1]==-1){
                        M[i][j] = M[i+1][j];
                    }
                    else{
                        M[i][j] = (M[i+1][j]+M[i][j+1])%mod;
                    }
                }    
            }
        }
        // for(int i=0; i<n; i++){
        //     for(int j=0; j<m; j++){
        //         cout<<M[i][j]<<" ";
        //     }
        //     cout<<endl;
        // }
        cout<<M[0][0]<<endl;
    }

    return 0;
}
