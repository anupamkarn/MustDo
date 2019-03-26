#include<bits/stdc++.h>

using namespace std;

int M[11][11];
bool flag=0;

bool check(int p, int q, int n){
    for(int i=0; i<=p; i++){
        if(M[i][q]) return 0;
    }
    for(int i=0; i<=q; i++){
        if(M[p][i]) return 0;
    }
    int i=p,j=q;
    while(i>=0&&j>=0){
        if(M[i][j]) return 0;
        i--;j--;
    }
    i=p;j=q;
    while(i<n&&j>=0){
        if(M[i][j]) return 0;
        i++;j--;
    }
    return 1;
}

void placeQueens(int p, int q, int n, int count){
    if(count==0){
        //cout<<"pushed"<<endl;
        flag=1;
        cout<<"[";
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                if(M[j][i]){
                    cout<<j+1<<" ";
                }
            }
        }
        cout<<"] ";
        return;
    }
    for(int i=0; i<n; i++){
        if(check(i,q,n)){
            //cout<<"cleared "<<i<<" "<<q<<" count "<<count<<endl;
            M[i][q]=1;
            placeQueens(i,q+1,n,count-1);
            M[i][q]=0;
        }
    }
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        flag=0;
        if(n==1){ 
            cout<<"[1 ]"<<endl;
            continue;
        }
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                M[i][j]=0;
            }
        }
        
        placeQueens(0,0,n,n);
        
        if(flag==0){
            cout<<"-1"<<endl;
            continue;
        }
        cout<<endl;
    }
    return 0;
}
