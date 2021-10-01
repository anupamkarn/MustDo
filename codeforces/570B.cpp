#include<bits/stdc++.h>

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	long q;
	cin>>q;
	while(q--){
		long n,k;
		cin>>n>>k;
		long a[n];
		long maxi=INT_MIN, mini=INT_MAX;
		for(int i=0; i<n; i++){
			cin>>a[i];
			if(a[i]>maxi) maxi=a[i];
			if(a[i]<mini) mini=a[i];
		}
		if(abs(maxi-k)<=abs(mini+k)){
			cout<<mini+k<<endl;
		}
		else{
			cout<<"-1"<<endl;
		}
	}
	return 0;
}

