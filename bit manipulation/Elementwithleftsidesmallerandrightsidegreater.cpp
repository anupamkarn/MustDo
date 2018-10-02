#include<bits/stdc++.h>

using namespace std;

int main(){
    int T;
    cin>>T;
    while(T--){
        long N,x;
        cin>>N;
        vector<long> v;
        
        for(long i=0; i<N; i++){
            cin>>x;
            v.push_back(x);
        }
        int value=0;
        bool flag_a=1, flag_b=1;
        for(long i=1; i<=N-2; i++){
            flag_a=1; flag_b=1;
            for(long j=0; j<N; j++){
                if(j==i)
                    continue;
                if(j<i&&v[j]-v[i]>0){
                    flag_a=0;
                    break;
                }
                else if(j>i&&v[j]-v[i]<0){
                    flag_b=0;
                    break;
                }
            }
            if(flag_a&&flag_b){
                value=v[i];
                break;
            }
        }
        if(value>0)
        cout<<value<<endl;
        else
        cout<<-1<<endl;
    }
    return 0;
}
