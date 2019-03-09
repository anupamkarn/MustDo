#include<bits/stdc++.h>

using namespace std;

int main(){
	map<long,long> mp1;
	map<long,long> mp2;
	long n,val;
	cin>>n;
	bool a[n+1]={0};
	for(long i=0; i<2*n; i++){
		cin>>val;
		if(a[val]==0){
			mp1[val]=i+1;
			a[val]=1;	
		} 
		else{
			mp2[val]=i+1;
		}
	} 
//	for(int i=1; i<=n; i++)
//		cout<<mp1[i]<<endl;
	long count1=0;
	for(long i=1; i<=n; i++){
		count1+=min(abs(mp1[i]-mp1[i-1])+abs(mp2[i]-mp2[i-1]),abs(mp1[i]-mp2[i-1])+abs(mp2[i]-mp1[i-1]));
		//count2+=min(abs(mp2[i]-mp2[i-1]);
	}
	cout<<count1-2<<endl;

 	return 0;
}

