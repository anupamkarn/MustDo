#include<bits/stdc++.h>

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin>>t;
	while(t--){
		long n;
		cin>>n;
		string s;
		cin>>s;
		int x=0,y=0;
		map<pair<int,int>,vector<int>> mp;
		mp[{0,0}].push_back(0);
		int ans=0,ans_l,ans_r;
		for(long i=0; i<n; i++){
			if(s[i]=='L'){
				x--;
			}
			else if(s[i]=='R'){
				x++;
			}
			else if(s[i]=='U'){
				y++;
			}
			else if(s[i]=='D'){
				y--;
			}
			mp[{x,y}].push_back(i+1);
			
			if(i==n-1){
				if(mp[{x,y}].size()==1){
					ans=-1;
				}
				else{
					long mini = INT_MAX;
				for(int j=1; j<mp[{x,y}].size(); j++){
					if(mini>mp[{x,y}][j]-mp[{x,y}][j-1]-1){
						mini = mp[{x,y}][j]-mp[{x,y}][j-1]-1;
						ans_l = mp[{x,y}][j-1] + 1;
						ans_r = mp[{x,y}][j];
					}
				}
				}
			}
		}
		if(ans==-1){
			cout<<ans<<endl;
		}
		else{
			cout<<ans_l<<" "<<ans_r<<endl;
		}
				
	}

	return 0;
}

