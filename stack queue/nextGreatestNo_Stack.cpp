#include<bits/stdc++.h>

using namespace std;

int main(){
    long n;
    int t;
    cin>>t;
    while(t--){
        cin>>n;
        long long a[n];
        long long vis[n];
        for(long i=0; i<n; i++){
            cin>>a[i];
        }
        
        stack<long long> s;
        s.push(0);
        for(long i=1; i<n; i++){
            while(!s.empty()&&a[i]>a[s.top()]){
                vis[s.top()]=a[i];
                s.pop();
            }
            s.push(i);
        }
        while(!s.empty()){
            vis[s.top()]=-1;
            s.pop();
        }
        
        for(long i=0; i<n; i++){
            cout<<vis[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
