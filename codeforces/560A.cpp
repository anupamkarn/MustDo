#include<bits/stdc++.h>

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	long n,x,y;
	cin>>n>>x>>y;
	string s;
	cin>>s;
	long count=0;
	for(int i=n-1; i>n-x-1; i--){
		if(i>=n-y-1){
			if(i==n-y-1){
				if(s[i]!='1') count++;
			}
			else if(s[i]!='0'){
				count++;
			}	
		}
		else{
			if(s[i]!='0') count++;
		}
	}
	cout<<count<<endl;

	return 0;
}

