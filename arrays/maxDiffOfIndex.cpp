#include<bits/stdc++.h>

using namespace std;
long long a[1000000],v1[1000000],v2[1000000];

int main(){
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    int t;
    cin>>t;
    long n;
    while(t--){
        cin>>n;
        
        for(long i=0; i<n; i++)
            cin>>a[i];
        if(n==1){
            cout<<"0"<<endl;
            continue;
        }    
        long maxi=-1;
        v1[0]=a[0];
        for(long i=1; i<n; i++){
            v1[i]=min(a[i],v1[i-1]);
        }
        v2[n-1]=a[n-1];
        for(long i=n-2; i>=0; i--){
            v2[i]=(max(a[i],v2[i+1]));
        }
        long i=0,j=0;
        while(i<n&&j<n){
            if(v1[i]<=v2[j]){
                maxi=max(maxi,j-i);
                j++;
            }
            else{
                i++;
            }
        }
        cout<<maxi<<endl;
    }
    return 0;
}
