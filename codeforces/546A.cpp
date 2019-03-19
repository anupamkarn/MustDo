#include<bits/stdc++.h>

using namespace std;

int main(){
	int n,a,b,k,count=0;
	cin>>n;
	pair<int,int> ar[n];
	for(int i=0; i<n; i++){
		cin>>a>>b;
		ar[i]=make_pair(a,b);
	}
	cin>>k;
	for(int i=1; i<=n; i++){
		if(ar[i-1].first<=k){
			if(ar[i-1].second>=k){
				count=i;
				break;
			}
		}
	}
	cout<<n-count+1<<endl;
 return 0;
}

