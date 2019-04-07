#include<bits/stdc++.h>

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	long n,x;
	cin>>n;
	int a[n];
	for(long i=0; i<n; i++){
		cin>>a[i];
	}
	long maxil=0,maxir=0;
	long cur;
	if(a[0]!=a[n-1]){
		cout<<n-1<<endl;
		return 0;
	}
	for(long i=1; i<n; i++){
		if(a[0]!=a[i]){
			if(maxil<i) maxil=i;
		}
	}
	for(long i=1; i<n-1; i++){
		if(a[n-1]!=a[i]){
			if(maxir<n-i-1) maxir=n-i-1;
		}
	}
	cout<<max(maxil,maxir)<<endl;

 return 0;
}

