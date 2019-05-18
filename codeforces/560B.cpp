#include<bits/stdc++.h>

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	multiset<long> s;
	long n,x;
	cin>>n;
	for(int i=0; i<n; i++){
		cin>>x;
		s.insert(x);
	}
	long count=0;
	long e=1;
	for(auto u=s.begin(); u!=s.end(); u++){
		
		if(*u>=e){
			count++;
			e++;
			//cout<<*u<<" "<<e<<endl;
		}
		
	}
	cout<<count<<endl;
	return 0;
}

