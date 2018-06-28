#include<bits/stdc++.h>

using namespace std;

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
        int sum1=INT_MIN,sum=0;
        for(int i=0; i<N; i++){
            sum+=a[i];
            //cout<<sum<<endl;
            if(sum>sum1){
                sum1=sum;
            }
            int m=0;
            int subsum=sum;
            while(m<i){
                subsum-=a[m];
                if(subsum>sum1)
                    sum1=subsum;
                m++;    
            }
        }    
        cout<<sum1<<endl;
    }
    return 0;
}
