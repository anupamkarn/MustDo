//DP approach of n stair problem, test case vary from 10^5 and n also vary from 10^5

#include<bits/stdc++.h>

#define MOD 1000000007

using namespace std;

long long c[100001];

void countPath(){
    c[1]=1;c[2]=2;
    for(long long i=3; i<=100000; i++){
        c[i] = (c[i-1]%MOD + c[i-2]%MOD)%MOD;
    }
}

int main(){
    long long t,n;
    cin>>t;
    countPath();
    while(t--){
        cin>>n;
        cout<<c[n]<<endl;
    }
    return 0;
}
