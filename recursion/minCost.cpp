//recursive approach for maximum cost path from any cell of 0th row to any cell of n-1th row

#include<bits/stdc++.h>

using namespace std;

int a[21][21];
int sumPath(int r, int c, int n){
    if(r>=0&&r<n&&c<n&&c>=0){
        if(r==0){
            return a[r][c];
        }
        return max(max(sumPath(r-1,c+1,n),sumPath(r-1,c,n)),sumPath(r-1,c-1,n))+a[r][c];    
    }
}
int main(){
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                cin>>a[i][j];
            }
        }
        long s=0;
        long maxi=INT_MIN;
        for(int j=n-1; j>=0; j--){
            s = sumPath(n-1,j,n);
            if(s>maxi) maxi=s;
        }
        cout<<maxi<<endl;
        
    }

    return 0;
}
