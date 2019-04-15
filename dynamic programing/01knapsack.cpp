
#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,c;
        cin>>n>>c;
        int M[n+1][c+1];
        int val[n+1],weight[n+1];
        M[0][0]=0;
        pair<int,int> a[n+1];
        for(int i=1; i<=n; i++){
            cin>>a[i].second;
            M[i][0]=0;
        }
        for(int i=1; i<=n; i++){
            cin>>a[i].first;
        }
        a[0].first=0;a[0].second=0;
        sort(a,a+n+1);
        for(int i=0; i<=c; i++)
            M[0][i]=0;
        for(int i=1; i<=n; i++){
            for(int j=1; j<=c; j++){
                if(a[i].first<=j){
                    M[i][j]=max(M[i-1][j],M[i-1][j-a[i].first]+a[i].second);
                }
                else M[i][j]=M[i-1][j];
            }
        }
        int maxi=INT_MIN;
        for(int i=0; i<n+1; i++){
            if(M[i][c]>maxi) maxi=M[i][c];
        }
        cout<<maxi<<endl;
    }

    return 0;
}
