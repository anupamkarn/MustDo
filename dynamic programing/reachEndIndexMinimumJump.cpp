#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    vector<long> v;
    long n,x;
    while(t--){
        v.clear();
        cin>>n;
        vector<long> vis(n,-1);
        for(long i=0; i<n; i++){
            cin>>x;
            v.push_back(x);
        }
        long count=0;
        vis[0]=0;
        for(int i=0; i<n; i++){
            x=v[i];
            if(count>n-1||(!v[i]&&vis[i+1]==-1)) break;
            if(!v[i]) continue;
            while(count<=i+x&&count<=n-1){
                vis[count]=vis[i]+1;
                count++;
            }
            
        }
        //for(auto u:vis) cout<<u<<" ";
        if(vis[n-1]==-1) cout<<"-1"<<endl;
        else cout<<vis[n-1]-1<<endl;
    }

    return 0;
}
