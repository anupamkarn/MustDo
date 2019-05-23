//gcd of array of numbers using eulcidean algo

#include<bits/stdc++.h>

using namespace std;

long gcd(long a, long b){
    if(a==0) return b;
     return gcd(b%a,a);
}

int main(){
    int t;
    cin>>t;
    while(t--){
        long n;
        cin>>n;
        long a[n];
        for(int i=0; i<n; i++){
            cin>>a[i];
        }
        if(n==1){
            cout<<a[0]<<endl;
            continue;
        }
        for(int i=1; i<n; i++){
            a[i]=gcd(a[i-1],a[i]);
        }
        cout<<a[n-1]<<endl;
        
    }

    return 0;
}
