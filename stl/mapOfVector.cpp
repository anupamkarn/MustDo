#include<bits/stdc++.h>

using namespace std;


int main(){
	int t;
	cin>>t;
	long n;
	while(t--){
		cin>>n;
		char a[n];
		int result[n+1];
		map<char,vector<int> > mp;
		for(int i=0; i<n; i++){
			cin>>a[i];
			mp[a[i]].push_back(i+1);
		}
		int x,y;
		long size;
		for(int i=0; i<n-1; i++)
			cin>>x>>y;
		for(auto u:mp){
			size = u.second.size();
			for(auto v:u.second){
				result[v-1]=size;
				size--;
			}
		}
		for(int i=0; i<n; i++){
			cout<<result[i]<<" ";
		}
		cout<<endl;
	}
 return 0;
}

