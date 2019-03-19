#include<bits/stdc++.h>

using namespace std;


long cat(int n){
    //if(n<=1) return 1;
    long s[n];
    s[0]=s[1]=1;
    for(int i=2; i<=n; i++){
    	s[i]=0;
        for(int j=0; j<i; j++)
			s[i]+=s[j]*s[i-j-1];
        //cout<<s<<endl;
    }
    
    return s[n];
}

int main(){
    
    int t;
    cin>>t;
    int n;
    while(t--){
    	
        cin>>n;
        long r = cat(n);
        cout<<r<<endl;
    }

    return 0;
}
