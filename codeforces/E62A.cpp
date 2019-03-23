#include<bits/stdc++.h>

using namespace std;

int main(){
	long n;
	cin>>n;
	long a[n];
	bool vis[n+1]={0};
	for(long i=0; i<n; i++){
		cin>>a[i];
	}
	long count=0,maxi=0;
	//multiset<long> s;
	for(int i=0; i<n; i++){
		if(a[i]>maxi){
			maxi=a[i];
		}
		//cout<<maxi<<endl;
		if(maxi<=i+1){
			count++;
			maxi=0;
		}
	}
	cout<<count<<endl;

 return 0;
}

