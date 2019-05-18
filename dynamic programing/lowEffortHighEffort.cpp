//problem https://practice.geeksforgeeks.org/problems/high-effort-vs-low-effort/
//DP approach

#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        long n;
        cin>>n;
        long h[n],l[n],a[n];
        for(long i=0; i<n; i++){
            cin>>h[i];
        }
        for(long i=0; i<n; i++){
            cin>>l[i];
        }
        a[0]=max(h[0],l[0]);
        for(long i=1; i<n; i++){
            if(i==1){
                a[i]=max(h[i-1]+l[i],max(l[i-1]+l[i],h[i]));
            }
            else{
                a[i]=max(a[i-1]+l[i],a[i-2]+h[i]);
                if(a[i]==a[i-2]+a[i]){
                    a[i-1]=a[i-2];
                }
            }
        }
        cout<<a[n-1]<<endl;
    }

    return 0;
}
