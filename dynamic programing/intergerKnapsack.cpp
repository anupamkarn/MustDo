#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,c;
        cin>>n>>c;
        int M[c+1]={0};
        M[0]=0;
        int weight[n+1],val[n+1];
        for(int i=1; i<=n; i++){
            cin>>val[i];
        }
        for(int i=1; i<=n; i++){
            cin>>weight[i];
        }
        weight[0]=0;val[0]=0;
        for(int i=1; i<c+1; i++){
            for(int j=1; j<n+1; j++){
                if(i>=weight[j]){
                    M[i]=max(M[i],M[i-weight[j]]+val[j]);
                }
            }
        }
        cout<<M[c]<<endl;
    }

    return 0;
}
