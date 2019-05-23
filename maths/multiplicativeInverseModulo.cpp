//multiplicative inverse of a mod m, where i will return the answer if it exist
#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int a,m;
        cin>>a>>m;
        bool flag=0;
        if(a%m==0||m%a==0&&a!=1){
            cout<<"-1"<<endl;
            continue;
        }
        for(int i=1; i<m; i++){
            if((a*i)%m==1){
                cout<<i<<endl;
                flag=1;
                break;
            }
        }
        if(!flag)
            cout<<"-1"<<endl;
    }
    

    return 0;
}
