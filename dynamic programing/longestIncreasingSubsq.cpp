#include<bits/stdc++.h>

using namespace std;

int main(){
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        int a[n];
        int count[n];
        for(int i=0; i<n; i++){
            cin>>a[i];
            count[i]=1;
        }    
        int maxi=INT_MIN;
        for(int i=0; i<n; i++){
            for(int j=0; j<i; j++){
                if(a[i]>a[j]&&count[i]<count[j]+1)
                    count[i]=count[j]+1;
            }
        }
        for(int i=0; i<n; i++){
            if(count[i]>maxi)
                maxi=count[i];
            // cout<<count[i]<<" ";    
        }
        cout<<maxi<<endl;
    }

    return 0;
}
