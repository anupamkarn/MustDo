#include<bits/stdc++.h>

#define MOD 1000000007

using namespace std;


long long power(long long base,long long expo)
{
	if(base==0)
		return 0;
	if(expo==0)
		return 1;
	else{
		if(expo%2==0)
			return (power(base,expo/2)*power(base,expo/2))%MOD;
		else
			return (base*power(base,expo-1))%MOD;
	}
}
long root(int i, long ds[]){
	while(i!=ds[i]){
		i = ds[i];
	}
	return i;
}
int main(){
	long n,k;
	cin>>n>>k;
	long ds[n+1];
	for(long i=0; i<=n; i++){
		ds[i]=i;
	}
	long u,v,ru,rv,c;
	bool flag=0;
	for(long i=0; i<n-1; i++){
		cin>>u>>v>>c;
		if(c==0){
			ru = root(u,ds);
			rv = root(v,ds);
			if(rv==v){
				ds[v]=ru;
			}
			else{
				ds[rv] = ru;
			}
		}
		else{
			flag=1;
		}
	}
	if(flag){
		map<long,long> mp;
		long x;
		for(long i=2; i<=n; i++){
			x = root(i,ds);
			mp[x]++;
		}
		long long s=0;
		for(auto u:mp){
			s = (s + power(u.second,k))%MOD;
		}
		
		cout<<((power(n,k)-s-1))%MOD<<endl;
	}
	else cout<<"0"<<endl;

 return 0;
}

