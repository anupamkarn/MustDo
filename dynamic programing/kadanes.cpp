#include<bits/stdc++.h>

using namespace std;

int maxdp(int a[], int n){
    int m[n];
    if(a[0]>0)
        m[0]=a[0];
    else
        m[0]=0;
    for(int i=1; i<n; i++){
        if(m[i-1]+a[i]>0){
            m[i]=m[i-1]+a[i];
        }
        else
            m[i]=0;
    }
    int sum=0;
    for(int i=0; i<n; i++){
        cout<<m[i]<<" ";
        if(m[i]>sum)
            sum=m[i];
    }
    return sum;
}

int main(){
    int T;
    cin>>T;
    int N;
    while(T--){
        cin>>N;
        int a[N];
        for(int i=0; i<N; i++){
            cin>>a[i];
        }
        int sum1 = maxdp(a,N);    
        cout<<sum1<<endl;
    }
    return 0;
}
