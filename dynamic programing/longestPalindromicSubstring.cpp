#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        long n = s.size();
        bool M[n][n];
        long maxLength=0;
        long start=0;
        for(long i=0; i<n; i++){
            M[i][i]=1;
            if(!maxLength){
                maxLength=1;
                start=i;
            }    
        }
        for(long i=0; i<n-1; i++){
            if(s[i]==s[i+1]){
                M[i][i+1]=1;
                if(maxLength!=2){
                    maxLength=2;
                    start=i;
                }
            }
            else{
                M[i][i+1]=0;
            }
        }
        for(long i=3; i<=n; i++){
            for(long j=0; j<=n-i; j++){
                if(M[j+1][j+i-2]&&s[j]==s[j+i-1]){
                    M[j][j+i-1]=1;
                    if(maxLength<i){
                        start=j;
                        maxLength=i;
                    }    
                }
                else{
                    M[j][j+i-1]=0;
                }
            }
        }
        for(long i=start; i<start+maxLength; i++){
            cout<<s[i];
        }
        cout<<endl;
    }

    return 0;
}
