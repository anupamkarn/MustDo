#include<bits/stdc++.h>

using namespace std;

vector<int> v;
int c=0;

int dp(vector<int> &v, int n){
    int a[n+1];
    memset(a,0,sizeof(a));
    
    a[0]=1;
       for(int j=0; j<v.size(); j++){
           for(int i=0; i<=n; i++){
	           if(v[j]<=i){
	               a[i]+=a[i-v[j]];
	           }
       		}    
    	}
    return a[n];
}

int main(){
    int t;
    cin>>t;
    int n,x,s;
    while(t--){
        v.clear();
        c=0;
        cin>>s;
        for(int i=0; i<s; i++){
            cin>>x;
            v.push_back(x);
        }
        sort(v.begin(),v.end());
        cin>>n;
        cout<<dp(v,n)<<endl;
        
    }
    return 0;
}
