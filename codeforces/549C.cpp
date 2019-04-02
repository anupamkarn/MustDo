#include<bits/stdc++.h>

using namespace std;

//void root(int i, pair<long,bool> ds[], set<long> &s){
//	while(i!=-1){
//		if(ds[i].second==1){
//			s.insert(i);
//			i = ds[i].first;
//		}
//		else break;
//	}
//}

int main(){
	long n,p;
	bool c;
	cin>>n;
	vector<pair<long,bool> >a[n+1];
	pair<long,bool> ds[n+1];
	vector<long> v;
	for(long i=0; i<n; i++){
		cin>>p>>c;
		ds[i+1] = make_pair(p,c);
		if(p!=-1)
			a[p].push_back(make_pair(i+1,c));
		if(c==1)
			v.push_back(i+1);		
	}
	set<long> s;
	bool flag=0;
	for(auto u:v){
		flag=0;
		for(long h=0; h<a[u].size(); h++){
			if(a[u][h].second==0){
				flag=1;
				break;
			}
		}
		if(flag){
			continue;
		}
		else{
			s.insert(u);
		}
	}
//	for(auto u:s){
//		root(u,ds,s);
//	}
	
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

