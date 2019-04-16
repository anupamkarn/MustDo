#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n+1];
        long s=0;
        for(int i=1; i<=n; i++){
            cin>>a[i];
            s+=a[i];
        }
        a[0]=0;
        if(s%2){
            cout<<"NO"<<endl;
            continue;
        }
        else{
            int c = s/2;
            bool M[n+1][c+1];
            for(int i=0; i<=c; i++){
                M[0][i]=0;
            }
            for(int i=0; i<=n; i++){
                M[i][0]=1;
            }
            for(int i=1; i<=n; i++){
                for(int j=0; j<=c; j++){
                    if(j>=a[i])
                        M[i][j]= M[i-1][j]||M[i-1][j-a[i]];
                    else
                        M[i][j]=M[i-1][j];
                }
            }
            if(M[n][c]){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
            // for(int i=0; i<=n; i++){
            //     for(int j=0; j<=c; j++){
            //         cout<<M[i][j]<<" ";
            //     }
            //     cout<<endl;
            // }
        }    
    }

    return 0;
}
