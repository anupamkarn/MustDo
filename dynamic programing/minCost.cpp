//DP approach to find min cost from any cell of 0th row to any cell n-1th row

#include<bits/stdc++.h>

using namespace std;

int a[21][21];
int c[21][21];

int sumPath(int n){
    for(int i=0; i<n; i++){
        c[0][i]=a[0][i];
    }
    int maxi=INT_MIN;
    for(int i=1; i<n; i++){
        for(int j=0; j<n; j++){
            if(j==0){
                c[i][j]=max(c[i-1][j]+a[i][j],c[i-1][j+1]+a[i][j]);
            }
            else if(j==n-1){
                c[i][j]=max(c[i-1][j-1]+a[i][j],c[i-1][j]+a[i][j]);
            }
            else{
                c[i][j]=max(max(c[i-1][j-1]+a[i][j],c[i-1][j]+a[i][j]),c[i-1][j+1]+a[i][j]);
            }
        }
    }
    for(int i=0; i<n; i++){
        if(maxi<c[n-1][i]) maxi = c[n-1][i];
    }
    return maxi;
    
}
int main(){
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                cin>>a[i][j];
                c[i][j]=0;
            }
        }
        long s=0;
        long maxi=INT_MIN;
        s = sumPath(n);
        cout<<s<<endl;
        
    }

    return 0;
}
