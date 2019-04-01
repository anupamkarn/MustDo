#include<bits/stdc++.h>

using namespace std;

void root(int i, pair<long,bool> ds[], set<long> &s){
	while(i!=-1){
		if(ds[i].second==1){
			s.insert(i);
			i = ds[i].first;
		}
		else break;
	}
}

int main(){
	long n,p;
	bool c;
	cin>>n;
	vector<long> a[n+1];
	pair<long,bool> ds[n+1];
	for(long i=0; i<n; i++){
		cin>>p>>c;
		ds[i+1] = make_pair(p,c);
		if(p!=-1)
			a[p].push_back(i+1);	
	}
	set<long> s;
	for(long i=1; i<n+1; i++){
		if(a[i].empty()&&ds[i].second==1){
			s.insert(i);
			cout<<i<<endl;
		} 
	}
	for(auto u:s){
		root(u,ds,s);
	}
	
	if(s.empty()){
		cout<<"-1"<<endl;
		return 0;	
	} 
	else{
		for(auto u:s) cout<<u<<" ";
	}
	cout<<endl;	

 return 0;
}

