#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        int M[n+1][m+1];
        string s1,s2;
        cin>>s1>>s2;
        for(int i=0; i<n+1; i++)
            M[i][0] = i;
        for(int j=0; j<m+1; j++)
            M[0][j] = j;
        for(int i=1; i<n+1; i++){
            for(int j=1; j<m+1; j++){
                if(s1[i-1]==s2[j-1])
                    M[i][j] = M[i-1][j-1];
                else{
                    M[i][j] = min(M[i-1][j],min(M[i][j-1],M[i-1][j-1])) + 1;
                }    
            }
        }
        cout<<M[n][m]<<endl;
    }
    return 0;
}
