#include<bits/stdc++.h>

using namespace std;

int main(){
	long n,x,sm=0;
	cin>>n;
	long long arr[n-1];
	for(int i=0; i<n-1; i++){
		cin>>x;
		if(i>0){
			arr[i]=x+arr[i-1];
			sm+=arr[i];
		}
		else{
			arr[i]=x;
			sm+=arr[i];
		}
	}
//	for(int i=0; i<n-1; i++) cout<<arr[i]<<" ";
//	cout<<endl;
	bool vis[1000000]={0};
	vector<long> v;
	long long s = n*(n+1)/2;
	bool flag=0,flag2=0;
	for(long i=1; i<=n; i++){
		if(sm+n*i==s){
			flag2=1;
			vis[i]=1;
			v.push_back(i);
			for(long j=1; j<=n-1; j++){
				if(!vis[arr[j-1]+i]){
					v.push_back(arr[j-1]+i);
					vis[arr[j-1]+i]=1;
				}
				else{
					flag=1;
					break;
				}
			}
			if(flag2) break;			
		}
		if(flag) break;
	}
	if(flag||v.size()==0) cout<<"-1"<<endl;
	else{
		for(int u=0; u<n; u++) 
			cout<<v[u]<<" ";
	}
	
 return 0;
}

