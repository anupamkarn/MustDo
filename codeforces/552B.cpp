#include<bits/stdc++.h>

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n;
	cin>>n;
	int a[n];
	set<int> s;
	bool vis[101]={0};
	for(int i=0; i<n; i++){
		cin>>a[i];
		s.insert(a[i]);
	}
	if(n==1||s.size()==1){
		cout<<"0"<<endl;
		return 0;
	}
	int count=0;
	bool flag=0;
	for(int count=0; count<n; count++){
	for(int i=0; i<=100; i++){
		int c = abs(a[count]-i);
		flag=0;
		for(int j=0; j<n; j++){
			if(i==a[j]) continue;
			if(abs(i-a[j])==c){
				continue;
			}
			else{
				flag=1;
				break;
			}
		}
		if(flag==0){
			cout<<c<<endl;
			return 0;
		}
	}
}
	if(flag==1){
			cout<<"-1"<<endl;
			return 0;
		}
	return 0;
}

