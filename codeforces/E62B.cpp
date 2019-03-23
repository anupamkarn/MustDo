#include<bits/stdc++.h>

using namespace std;

int main(){
	int t;
	int n;
	cin>>t;
	string s;
	while(t--){
		cin>>n;
		cin>>s;
		if(n==1){
			cout<<"0"<<endl;
			continue; 
		}
		bool flag=0;
		int l=0,r=0;
		if(s[0]=='>'||s[n-1]=='<'){
			cout<<"0"<<endl;
			continue;
		} 
		for(int i=0; i<n; i++){
			if(s[i]=='>'){
				break;
			}
			else l++;
		}
		for(int i=n-1; i>=0; i--){
			if(s[i]=='<'){
				break;
			}
			else r++;
		}
		cout<<min(l,r)<<endl;
		
	}

 return 0;
}

