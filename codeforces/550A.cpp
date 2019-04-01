#include<bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin>>n;
	string str;
	map<char,int> mp;
	mp['a']=0;mp['b']=0;mp['c']=0;mp['d']=0;mp['e']=0;mp['f']=0;mp['g']=0;mp['h']=0;mp['i']=0;
	mp['k']=0;mp['l']=0;mp['m']=0;mp['n']=0;mp['o']=0;mp['p']=0;mp['q']=0;mp['r']=0;mp['s']=0;
	mp['t']=0;mp['v']=0;mp['x']=0;mp['y']=0;mp['z']=0;mp['j']=-1;mp['u']=-1;mp['w']=-1; 
	while(n--){
		cin>>str;
		for(auto u:mp){
			u.second = 0;
		}
		mp['j']=-1;mp['u']=-1;mp['w']=-1;
		bool flag=0;
		for (int i = 0; i < str.size(); i++){
			if(mp[str[i]]==-1||mp[str[i]]==1){
				cout<<str[i]<<endl;
				cout<<"No"<<endl;
				flag=1;
				break;
			}
			else{
				mp[str[i]]=1;
			}
		}
//		for(auto u:mp){
//			cout<<u.first<<" "<<u.second<<endl;
//		}
		bool s=0,e=0;
		if(flag) continue;
		else{
			for(auto u:mp){
				if(u.second==-1) continue;
				if(u.second==1&&e==0){
					s=1;	
				}
				else if(s==1&&e==0&&u.second==0){
					e=1;	
				}
				else if(u.second==0&&s==0&&e==0) continue;
				else if(u.second==0&&s==1&&e==1) continue;
				else{
					cout<<"No"<<endl;
					flag=1;
					break;
				}
			}
		}
		if(flag){
			continue;
		}
		else{
			cout<<"Yes"<<endl;
		}
	}

 return 0;
}

