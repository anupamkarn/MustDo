#include<bits/stdc++.h>

using namespace std;



int main(){
    int T;
    cin>>T;
    while(T--){
        int M;
        cin>>M;
        vector<int> v;
        int x;
        for(int i=0; i<M; i++){
            cin>>x;
            v.push_back(x);
        }
        sort(v.begin(), v.end());
        int N;
        cin>>N;
        int a[N+1]={0};
        a[0]=1;
        for(int i=1; i<=N; i++){
            if(i<v[0]){
                a[i]=0;
                continue;
            }
            else if(i%v[0]==0){
                a[i]=1;
            }
        }
        
        for(int i=1; i<M; i++){
            for(int j=0; j<=N; j++){
                if(v[i]>j)
                    continue;
                else{
                    a[j]=a[j]+a[j-v[i]];
                }    
            }
        }
        cout<<a[N]<<endl;
    }

    return 0;
}
