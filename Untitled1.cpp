#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	ios::sync_with_stdio(false);
	long long N,a,b,c,x,y,T;
	cin>>T;
	while(T--){
	    long long count=0;
	    cin>>N>>a>>b>>c;
	    vector<int> v1;
	    vector<int> v2;
	    bool arr[1000008]={0};
	        for(long long i=1; i<=min(N,a); ++i){
	        
	            if(N%i==0)
	                v1.push_back(i);
	        
	        }
	        for(long long i=1; i<=min(N,b); ++i){
	        
	            if(N%i==0)
	                v2.push_back(i);
	        
	        }
	        for(long long i=1; i<=min(N,c); ++i){
	        
	            if(N%i==0)
	                arr[i]=1;
	        
	        }
	    for(long long i=0; i<v1.size(); ++i){
	        for(long long j=0; j<v2.size(); ++j){
	            y=v1[i]*v2[j];
	            x=N/y;
	            if(x<=1000000){
	            if(arr[x]==1&&(x*y)==N){
	                count++;
	                }
	            }
	        }
	    }
	    cout<<count<<endl;
	}
	return 0;
}

