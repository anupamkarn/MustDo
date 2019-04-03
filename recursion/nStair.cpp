//n stair solved by recursion

#include<bits/stdc++.h>
#define MOD 1000000009

using namespace std;

long long count(long long n){
    if(n==1){
        return 1;
    }
    else if(n==2){
        return 2;
    }
    return (count(n-1)%MOD+count(n-2)%MOD)%MOD;
}

int main(){
    long long t,n;
    cin>>t;
    while(t--){
        cin>>n;
        long long path = count(n);
        cout<<path<<endl;
    }
    return 0;
}
